#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Subtopic {
public:
  Subtopic() {}
  Subtopic(string name, string link) {
    name_ = name;
    link_ = link;
  }

  string GetName() const { return name_; }

  string GetLink() const { return link_; }

private:
  string name_;
  string link_;
};

class Subject {
public:
  Subject() {}
  Subject(string name) { name_ = name; }
  string GetName() const { return name_; }
  void AddSubtopic(string name, string link) {
    subtopics_.push_back(Subtopic(name, link));
  }

  vector<Subtopic> GetSubtopics() const { return subtopics_; }

private:
  string name_;
  vector<Subtopic> subtopics_;
};

class AcademicSearchEngine {
public:
  void AddSubject(Subject subject) { subjects_[subject.GetName()] = subject; }

  vector<string> GetSubjectNames() const {
    vector<string> names;
    for (auto const &subject : subjects_) {
      names.push_back(subject.first);
    }
    return names;
  }

  vector<Subtopic> GetSubtopics(string subject_name) const {
    return subjects_.at(subject_name).GetSubtopics();
  }

  string GetLink(string subject_name, string subtopic_name) const {
    for (auto const &subtopic : subjects_.at(subject_name).GetSubtopics()) {
      if (subtopic.GetName() == subtopic_name) {
        return subtopic.GetLink();
      }
    }
    return "";
  }

private:
  map<string, Subject> subjects_;
};


class Semester{
    private: 
        vector<Subject> subjects_; 
        AcademicSearchEngine search; 
        int sem_; 
    public: 
        
        Semester(){}
        
        Semester(int sem){
            sem_ = sem; 
        }

        vector<Subject> AddSubject(Subject subject){
            subjects_.push_back(subject); 
            search.AddSubject(subject); 
            return subjects_; 
        }

        vector<Subject> GetSubjects(){ return subjects_; }
        AcademicSearchEngine GetSearchEngine(){ return search; }

}; 




int main() {
  // Create academic search engine
//   AcademicSearchEngine search_engine;

  // Semester 3 Subjects
  // Creaate UI/UX Subject
  Subject ui_ux("UI/UX");
  ui_ux.AddSubtopic("Historical evolution GUI",
                    "https://www.youtube.com/watch?v=gjVX47dLlN8");
  ui_ux.AddSubtopic("Interactive system design: Concept of usability",
                    "https://www.youtube.com/watch?v=lDnDVnMiA8c");
  ui_ux.AddSubtopic("Prototyping techniques",
                    "https://www.youtube.com/watch?v=pijzYKAOluw");
  ui_ux.AddSubtopic("Characteristics of user interface,",
                    "https://www.youtube.com/watch?v=fa7s_AXjMj0");
  ui_ux.AddSubtopic("Socio-Organizational and stakeholder requirements",
                    "https://www.youtube.com/watch?v=MtqGibT_q8s");
  ui_ux.AddSubtopic("Application frameworks",
                    "https://www.youtube.com/watch?v=SD9KnFsVKsQ");
  ui_ux.AddSubtopic("Universal Design Models and Theories",
                    "https://www.youtube.com/watch?v=gmGgplQkrVw");
  ui_ux.AddSubtopic("Communication and collaboration models",
                    "https://www.youtube.com/watch?v=0-U4Z2e7J4w");
  ui_ux.AddSubtopic("Internet of things in HCI,",
                    "https://www.youtube.com/watch?v=APH6Nrar27w");
  ui_ux.AddSubtopic("HCI for navigation design",
                    "https://www.youtube.com/watch?v=AHQn_K6EbLE");
  ui_ux.AddSubtopic("Ubiquitous computing with design analysis",
                    "https://www.youtube.com/watch?v=r8i77pvBpTM");
  ui_ux.AddSubtopic("A/B testing",
                    "https://www.youtube.com/watch?v=eiIhTbFP0ls");     

  // Create C++ Subject
  Subject cpp("C++");
  cpp.AddSubtopic("OOPs Concepts C++",
                  "https://www.youtube.com/watch?v=YscEcXRmBoY");
  cpp.AddSubtopic("Inheritance, Multiple inheritance",
                  "https://www.youtube.com/watch?v=h3INeRqf2vU");   
  cpp.AddSubtopic("Run-time Polymorphism",
                  "https://www.youtube.com/watch?v=MiDsF8MSO1c");
  cpp.AddSubtopic("Time Complexity",
                  "https://www.youtube.com/watch?v=rq_rwnveh8s");   
  cpp.AddSubtopic("Sorting in Arrays | Selection Sort | C++",
                  "https://www.youtube.com/watch?v=dQa4A2Z0_Ro");   
  cpp.AddSubtopic("C++ Pointers, Structures and Unions",
                  "https://www.youtube.com/watch?v=jCfR7CFlzts");   
  cpp.AddSubtopic("Linked List",
                  "https://www.youtube.com/watch?v=R9PTBwOzceo");   
  cpp.AddSubtopic("Singly Linked List Implementation",
                  "https://www.youtube.com/watch?v=6wXZ_m3SbEs");   
  cpp.AddSubtopic("Infix to Postfix - Stack Challenges | C++",
                  "https://www.youtube.com/watch?v=mg9yi6YuAVk");   
  cpp.AddSubtopic("Circular Queue Insertion, Deletion, Traversal",
                  "https://www.youtube.com/watch?v=dn01XST9-bI");   
  cpp.AddSubtopic("Tree Data Structures,",
                  "https://www.youtube.com/watch?v=-DzowlcaUmE");   
  cpp.AddSubtopic("BST Searching",
                  "https://www.youtube.com/watch?v=cySVml6e_Fc");   
  cpp.AddSubtopic("Graph Representation in Data Structure",
                  "https://www.youtube.com/watch?v=5hPfm_uqXmw");   
  cpp.AddSubtopic("Topological Sorting",
                  "https://www.youtube.com/watch?v=3tkcfvCNtM8");   
  cpp.AddSubtopic("Height Balanced Trees: AVL Trees",
                  "https://www.youtube.com/watch?v=YWqla0UX-38");   
  cpp.AddSubtopic("Red Black Trees",
                  "https://www.youtube.com/watch?v=3RQtq7PDHog");   
  cpp.AddSubtopic(" B-Tree Deletion in Data Structures",
                  "https://www.youtube.com/watch?v=GKa_t7fF8o0");   
  cpp.AddSubtopic("B+ Tree Deletion",
                  "https://www.youtube.com/watch?v=pGOdeCpuwpI");  
    // Create IMS Subject
  Subject ims("IMS");
  ims.AddSubtopic("Purpose of IMS",
                  "https://www.youtube.com/watch?v=WuEfNE1zYhs");
  ims.AddSubtopic("Basic Concepts of Entity-Relationship Model",
                  "https://www.youtube.com/watch?v=wOD02sezmX8");
  ims.AddSubtopic("Concept of Relationships in ER Diagram",
                  "https://www.youtube.com/watch?v=n3mHfQft5P8");
  ims.AddSubtopic("EER diagram: Specialization, Generalization, Constraints of EER, Aggregation",
                  "https://www.youtube.com/watch?v=1G4agXWNr_M");
  ims.AddSubtopic("Functional dependency – definition",
                  "https://www.youtube.com/watch?v=qn5neFBpU40");
  ims.AddSubtopic("All Normal Forms",
                  "https://www.youtube.com/watch?v=EGEwkad_llA");
  ims.AddSubtopic("query cost measures",
                  "https://www.youtube.com/watch?v=rKN60UnVsMw");
  ims.AddSubtopic("Transformation of relational expressions",
                  "https://www.youtube.com/watch?v=_luHqhzrDD8");
  ims.AddSubtopic("Properties of transactions",
                  "https://www.youtube.com/watch?v=-GS0OxFJsYQ");
  ims.AddSubtopic("Serializability of transactions",
                  "https://www.youtube.com/watch?v=s8QlJoL1G6w");
  ims.AddSubtopic("Two- Phase Commit protocol",
                  "https://www.youtube.com/watch?v=W-TadPbi--A");
  ims.AddSubtopic("Recovery and Atomicity",
                  "https://www.youtube.com/watch?v=gk3V11eULnU");
  ims.AddSubtopic("Pipelining, Streaming algorithms framework",
                  "https://www.youtube.com/watch?v=nv0yAm5gc-E");
  ims.AddSubtopic("Data cube concept",
                  "https://www.youtube.com/watch?v=-BuPrk4QEzQ");
  ims.AddSubtopic("NoSQL database systems framework",
                  "https://www.youtube.com/watch?v=0buKQHokLK8");    

    // Create Probability Subject
  Subject probability("Probability");
  probability.AddSubtopic("Conditional Probability",
                          "https://www.youtube.com/watch?v=ADaxql883-M");   
  probability.AddSubtopic("Law of total probability",
                          "https://www.youtube.com/watch?v=8JwL1htQiTI");
  probability.AddSubtopic("Monty Hall problem",
                          "https://www.youtube.com/watch?v=4Lb-6rxZxx0");
  probability.AddSubtopic("Joint, marginal and conditional probability",
                          "https://www.youtube.com/watch?v=SrEmzdOT65s");
  probability.AddSubtopic("Discrete Distributions",
                          "https://www.youtube.com/watch?v=mrCxwEZ_22o");
  probability.AddSubtopic("Bernoulli",
                          "https://www.youtube.com/watch?v=O8vB1eInP_8");
  probability.AddSubtopic("Continuous and Discrete Time Signals",
                          "https://www.youtube.com/watch?v=H4hk6N5vC1Q");
  probability.AddSubtopic("Chebyshev inequality",
                          "https://www.youtube.com/watch?v=ZXq0ygaZuwg");
  probability.AddSubtopic("Descriptive statistics,",
                          "https://www.youtube.com/watch?v=Uv3Blie7F3g");
  probability.AddSubtopic("Visualization of central tendency and variability",
                          "https://www.youtube.com/watch?v=kn83BA7cRNM");
  probability.AddSubtopic("Hypothesis Testing",
                          "https://www.youtube.com/watch?v=5D1gV37bKXY"); 

    // Create Microprocessors Subject
  Subject micro("Microprocessors");
  micro.AddSubtopic("Microprocessor Architecture",
                    "https://www.youtube.com/watch?v=w2oXhH02GSU");
  micro.AddSubtopic("Types of Registers in 8085",
                    "https://www.youtube.com/watch?v=z0ktlO0qLbQ");
  micro.AddSubtopic("Bus Interface Unit",
                    "https://www.youtube.com/watch?v=QtFV9T946zI");
  micro.AddSubtopic("MIPS Instructions format",
                    "https://www.youtube.com/watch?v=IuH_8t7vPu8");
  micro.AddSubtopic("Addressing Modes",
                    "https://www.youtube.com/watch?v=ol_g3Lt66xA");
  micro.AddSubtopic("Microoperation and their RTL specification",
                    "https://www.youtube.com/watch?v=kTdvOlA2ko0");
  micro.AddSubtopic(" Arithmetic and logic unit",
                    "https://www.youtube.com/watch?v=1I5ZMmrOfnA");
  micro.AddSubtopic("What are Signed & Unsigned Numbers",
                    "https://www.youtube.com/watch?v=XV91bg6KvmQ");
  micro.AddSubtopic("Memory Interfacing with 8085 ",
                    "https://www.youtube.com/watch?v=_3SpMwyyFTw&list=PLgwJf8NK-2e7ntppmuezgo1ILufEQZT4P");
  micro.AddSubtopic("Address allocation technique and decoding",
                    "https://www.youtube.com/watch?v=HC9PmityDbs");
  micro.AddSubtopic("Interfacing of I/O devices",
                    "https://www.youtube.com/watch?v=PM728r4oGcE");
  micro.AddSubtopic("LEDs toggle-switches",
                    "https://www.youtube.com/watch?v=U7-FDr0p-Bw");
  micro.AddSubtopic("Pipelining, pipeline hazards,",
                    "https://www.youtube.com/watch?v=srlgaJgaxRE");
  micro.AddSubtopic("Design issues of pipeline architecture",
                    "https://www.youtube.com/watch?v=nv0yAm5gc-E");
  micro.AddSubtopic("Comparison between GPU and CPU Architecture",
                    "https://www.youtube.com/watch?v=jSvBZ5aiEcY");
    //create Linear algebra and ODE subject
    Subject Linear_algebra_and_ODE("Linear algebra and ODE");
    Linear_algebra_and_ODE.AddSubtopic("Vector Space",
                                       "https://www.youtube.com/watch?v=1XlT3Y2oyAU&list=PLU6SqdYcYsfI7Ebw_j-Vy8YKHdbHKP9am");
    Linear_algebra_and_ODE.AddSubtopic("Gram-Schmidt Orthogonalisation Process",
                                       "https://www.youtube.com/watch?v=UOZjINOGLog&list=PLU6SqdYcYsfI7Ebw_j-Vy8YKHdbHKP9am&index=20");                                   
    Linear_algebra_and_ODE.AddSubtopic("Matrices and determinant",
                                       "https://www.youtube.com/watch?v=lExKc3ADHLI&list=PLU6SqdYcYsfI7Ebw_j-Vy8YKHdbHKP9am&index=17");  
    Linear_algebra_and_ODE.AddSubtopic("Diagonalization",
                                       "https://www.youtube.com/watch?v=DtNbBPfDoL8&list=PLU6SqdYcYsfI7Ebw_j-Vy8YKHdbHKP9am&index=14");                                    
    //create mechanics subject
    Subject mechanics("Mechanics");
    mechanics.AddSubtopic("Introduction",
                          "https://www.youtube.com/watch?v=eooXJXViCq0" );
    mechanics.AddSubtopic("Force",
                          "https://www.youtube.com/watch?v=FiAIhtYVZ0A&list=PLPvaSRcEQh4lfyQYKBRuTiLekgVIw2jvC&index=3");
    mechanics.AddSubtopic("Stress, Strain, Hook's Law & Modulus of Elasticity",
                          "https://www.youtube.com/watch?v=qDZjRCUBMLg&list=PLg2LVpcRrOF7L4FknzcfxrnMin-03WUHs&index=2");
    mechanics.AddSubtopic("Vernier caliper",
                          "https://www.youtube.com/watch?v=5ehOFTP-aD4&list=PLg2LVpcRrOF7L4FknzcfxrnMin-03WUHs&index=18");
    mechanics.AddSubtopic("Bernoulli's principle",
                          "https://www.youtube.com/watch?v=n-iM72eLuM8&list=PLg2LVpcRrOF7L4FknzcfxrnMin-03WUHs&index=27");
    // Create Python subject
  Subject python("Python");
  python.AddSubtopic("Introduction",
                     "https://youtu.be/XIR20HH8mNY?si=kFVQ16XF6at3BQlv");
  python.AddSubtopic("Loops",
                     "https://youtu.be/M0RsvJnaGYg?si=gA_74MTxPKCwWiaJ");
  python.AddSubtopic("Arguments",
                     "https://youtu.be/0d6b6fFuCkE?si=mz7AIFUayCUBmLET");
  python.AddSubtopic(
      "Tkinter",
      "https://youtube.com/"
      "playlist?list=PLu0W_9lII9ajLcqRcj4PoEihkukF_OTzA&si=llKHOlpI1_XA34aw");
  python.AddSubtopic(
      "Matplotlib",
      "https://youtube.com/"
      "playlist?list=PLjVLYmrlmjGcC0B_FP3bkJ-JIPkV5GuZR&si=ysSdjkkf-LlDwMa7");                                                                                                                                                     

  // Create ECE subject
  Subject ece("ECE");
  ece.AddSubtopic("Voltage current resistance",
                  "https://youtu.be/08YugQce9OA?si=TO4LIxcbaxwCW7bN");
  ece.AddSubtopic("Norton theorem",
                  "https://youtu.be/Sk2z3K4l-m8?si=q_H12FiWsJEKKhrI");
  ece.AddSubtopic(
      "Diodes and its application",
      "https://youtube.com/"
      "playlist?list=PLwjK_iyK4LLBj2yTYPYKFKdF6kIg0ccP2&si=4hzz0gnXHl4dGdx_");
  ece.AddSubtopic("Diodes problem",
                  "https://youtu.be/1uVJS5I8IC0?si=WdgtvQIm9djcEW2B");
  ece.AddSubtopic("Op amps",
                  "https://youtu.be/idJEMYhrIfs?si=8eaDtvQTX38MEP4B");

  // Create Engineering Calculus subject
  Subject calculus("Engineering Calculus");
  calculus.AddSubtopic(
      "Real number system",
      "https://youtube.com/"
      "playlist?list=PLU6SqdYcYsfKvYZhiXPoaR5fBYDYXENSn&si=axkKp-oMdjqdSbGJ");
  calculus.AddSubtopic(
      "Sequence and series",
      "https://youtube.com/"
      "playlist?list=PLU6SqdYcYsfJqbZvQECrwnlQrp4fg6isX&si=0x4zvERQL7o5yF7k");
  calculus.AddSubtopic(
      "Limit inferior and superior",
      "https://www.youtube.com/live/mAGyuU8lbns?si=fWnYkzYSSAeiPWPH");
  calculus.AddSubtopic("Mean value theorem",
                       "https://youtu.be/IFtjDDB8fzo?si=CJIoeRLdaBCn_AAt");
  calculus.AddSubtopic(
      "Calculus",
      "https://youtube.com/"
      "playlist?list=PLg2LVpcRrOF5Rg13jD_pKP3Jw1-t_lwb1&si=-fPAUgl7NUcjvCc8");

  Semester sem1(1), sem2(2), sem3(3), sem4(4); 
  
  sem1.AddSubject(python); 
  sem1.AddSubject(ece); 
  sem1.AddSubject(calculus); 

//   sem2.AddSubject(ui_ux); 
//   sem2.AddSubject(micro); 

  sem3.AddSubject(ui_ux); 
  sem3.AddSubject(cpp); 
  sem3.AddSubject(ims); 
  sem3.AddSubject(probability); 
  sem3.AddSubject(micro); 

  sem2.AddSubject(mechanics);
  sem2.AddSubject(Linear_algebra_and_ODE);

  // Display semester menu
  cout << "Semesters:" << endl;
  cout << "1. Semester 1" << endl;
  cout << "2. Semester 2" << endl;
  cout << "3. Semester 3" << endl;

  // Get user input for semester
  int semester_choice;
  cout << "Enter semester number: ";
  cin >> semester_choice;

  // Validate semester choice
  if (semester_choice < 1 || semester_choice > 4) {
    cout << "Invalid semester choice. Exiting program." << endl;
    return 1;
  }

    

  // Display subject menu based on the chosen semester
  cout << "Subjects for Semester " << semester_choice << ":" << endl;

  // Modify this switch statement based on your actual subjects for each semester
  Semester current_sem; 
  switch (semester_choice) {
    case 1:
        current_sem = sem1; 
      break;
    case 2:
        current_sem = sem2; 
      break;
    case 3:
        current_sem = sem3; 
      break;
    case 4:
        current_sem = sem3; 
      break;
  }

    AcademicSearchEngine search_engine = current_sem.GetSearchEngine(); 
    

    vector<string> subjects = search_engine.GetSubjectNames(); 
    for (int i = 0; i < subjects.size(); i++) {
        cout << i + 1 << ". " << subjects[i] << endl; 
    }


  // Get user input for subject
  int subject_choice;
  cout << "Enter subject number: ";
  cin >> subject_choice;

  // Validate subject choice
  if (subject_choice < 1 || subject_choice > search_engine.GetSubjectNames().size()) {
    cout << "Invalid subject choice. Exiting program." << endl;
    return 1;
  }

  string subject_name = search_engine.GetSubjectNames()[subject_choice - 1];
  vector<Subtopic> subtopics = search_engine.GetSubtopics(subject_name);

  // Display subtopics
  cout << "Subtopics for " << subject_name << ":" << endl;
  for (int i = 0; i < subtopics.size(); i++) {
    cout << i + 1 << ". " << subtopics[i].GetName() << endl;
  }

  // Get user input for subtopic
  int subtopic_choice;
  cout << "Enter subtopic number: ";
  cin >> subtopic_choice;

  // Validate subtopic choice
  if (subtopic_choice < 1 || subtopic_choice > subtopics.size()) {
    cout << "Invalid subtopic choice. Exiting program." << endl;
    return 1;
  }

  string subtopic_name = subtopics[subtopic_choice - 1].GetName();
  string link = search_engine.GetLink(subject_name, subtopic_name);

  // Display link
  if (link != "") {
    cout << "Link: " << link << endl;
  } else {
    cout << "Link not found." << endl;
  }

  return 0;
}
