// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreData;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSURLSession;
@class UIButton;
@class UITextField;
@class UITextView;
@class UITableView;
@class NSIndexPath;
@class UITableViewCell;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC8GoChange21AddIdeaViewController")
@interface AddIdeaViewController : UIViewController <UIScrollViewDelegate, UITextViewDelegate, UITableViewDelegate, UITextFieldDelegate>
@property (nonatomic) NSInteger petitionId;
@property (nonatomic, strong) NSURLSession * _Nonnull session;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameTextField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailTextView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addNameButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addDetailButton;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tweakTable;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addSolution;
@property (nonatomic, copy) NSString * _Null_unspecified currentNameData;
@property (nonatomic, copy) NSString * _Null_unspecified currentDetailData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)doneAddingIdea:(UIButton * _Nonnull)sender;
- (IBAction)addNameClick:(id _Nonnull)sender;
- (IBAction)addDetailClick:(UIButton * _Nonnull)sender;
- (IBAction)addTweak:(UIButton * _Nonnull)sender;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (IBAction)addPetition:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange22AddTweakViewController")
@interface AddTweakViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameText;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailText;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified nameButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified detailButton;
@property (nonatomic, copy) NSString * _Nullable nameData;
@property (nonatomic, copy) NSString * _Nullable detailData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (IBAction)nameButtonClick:(UIButton * _Nonnull)sender;
- (IBAction)detailButtonClick:(UIButton * _Nonnull)sender;
- (IBAction)addTweakClick:(UIButton * _Nonnull)sender;
- (IBAction)cancelClick:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;
@class NSManagedObjectModel;
@class NSPersistentStoreCoordinator;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC8GoChange11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
@property (nonatomic, strong) NSURL * _Nonnull applicationDocumentsDirectory;
@property (nonatomic, strong) NSManagedObjectModel * _Nonnull managedObjectModel;
@property (nonatomic, strong) NSPersistentStoreCoordinator * _Nonnull persistentStoreCoordinator;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull managedObjectContext;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class Solution;
@class NSEntityDescription;

SWIFT_CLASS("_TtC8GoChange6Change")
@interface Change : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull changeName;
@property (nonatomic, copy) NSString * _Nonnull changeDescription;
@property (nonatomic, strong) NSNumber * _Nonnull owner;
@property (nonatomic, copy) NSString * _Nonnull firebaseLocation;
@property (nonatomic, copy) NSString * _Nonnull changeID;
@property (nonatomic, copy) NSArray<Solution *> * _Nonnull changeNeedingSolution;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary context:(NSManagedObjectContext * _Nonnull)context OBJC_DESIGNATED_INITIALIZER;
@end

@class Firebase;

SWIFT_CLASS("_TtC8GoChange12CreateChange")
@interface CreateChange : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, copy) NSString * _Nonnull savedAutoID;
- (nonnull instancetype)initWithCurrentDetailData:(NSString * _Nonnull)currentDetailData currentNameData:(NSString * _Nonnull)currentNameData owner:(BOOL)owner OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)saveChangeToFirebase:(NSString * _Nonnull)currentDetailData currentNameData:(NSString * _Nonnull)currentNameData;
- (Change * _Nonnull)createCoreDataChange:(NSString * _Nonnull)currentDetailData currentNameData:(NSString * _Nonnull)currentNameData owner:(BOOL)owner;
@end


SWIFT_CLASS("_TtC8GoChange26CreateChangeViewController")
@interface CreateChangeViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailsField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified namePlusButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified detailsPlusButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified postButton;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified solutionTable;
@property (nonatomic, copy) NSString * _Nonnull currentNameData;
@property (nonatomic, copy) NSString * _Nonnull currentDetailData;
@property (nonatomic, copy) NSString * _Nonnull sendingController;
@property (nonatomic, copy) NSString * _Nonnull isOwner;
@property (nonatomic, copy) NSString * _Nonnull changeID;
@property (nonatomic, copy) NSArray<Solution *> * _Nonnull retrievedSolutionArray;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (IBAction)homeButtonClick:(UIButton * _Nonnull)sender;
- (IBAction)nameActionButton:(UIButton * _Nonnull)sender;
- (IBAction)detailsActionButton:(UIButton * _Nonnull)sender;
- (IBAction)addSolution:(UIButton * _Nonnull)sender;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (IBAction)PostInfo:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange14CreateSolution")
@interface CreateSolution : NSObject
@property (nonatomic, strong) Firebase * _Nullable ref;
@property (nonatomic, strong) Change * _Nullable linkedChange;
- (nonnull instancetype)initWithChange:(Change * _Nonnull)change firebaseLocation:(NSString * _Nonnull)firebaseLocation solutionName:(NSString * _Nonnull)solutionName solutionDescription:(NSString * _Nonnull)solutionDescription OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)createCoreDataChange:(NSString * _Nonnull)solutionName solutionDescription:(NSString * _Nonnull)solutionDescription;
- (void)saveChangeToFirebase:(NSString * _Nonnull)solutionName solutionDescription:(NSString * _Nonnull)solutionDescription;
@end

@class NSFetchedResultsController;

SWIFT_CLASS("_TtC8GoChange23FollowingViewController")
@interface FollowingViewController : UITableViewController <NSFetchedResultsControllerDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified followingTableView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified homeButton;
- (void)viewDidLoad;
- (IBAction)homeButtonClick:(UIButton * _Nonnull)sender;
- (void)didReceiveMemoryWarning;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@property (nonatomic, strong) NSFetchedResultsController * _Nonnull fetchedResultsController;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange14GoChangeClient")
@interface GoChangeClient : NSObject
- (void)printName;
+ (GoChangeClient * _Nonnull)sharedInstance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface GoChangeClient (SWIFT_EXTENSION(GoChange))
@end

@class NSData;
@class NSError;

@interface GoChangeClient (SWIFT_EXTENSION(GoChange))
- (NSString * _Nonnull)escapedParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
- (void)parseJSON:(NSData * _Nonnull)data completionHandler:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
@end

@class UILabel;

SWIFT_CLASS("_TtC8GoChange18HomeViewController")
@interface HomeViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified welcomeLabel;
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified followButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified followingLabel;
- (void)viewDidLoad;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (IBAction)createChange:(UIButton * _Nonnull)sender;
- (IBAction)addUserData:(UIButton * _Nonnull)sender;
- (void)checkCoreData;
- (IBAction)logout:(UIButton * _Nonnull)sender;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange8PostData")
@interface PostData : NSObject
@property (nonatomic, copy) NSString * _Nullable savedAutoID;
@property (nonatomic, copy) NSString * _Nullable changeID;
- (nonnull instancetype)initWithPostDictionary:(NSDictionary<NSString *, id> * _Nonnull)postDictionary OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)saveChangeToFirebase;
- (void)createCoreDataChange;
@end

@class NSMutableArray;

SWIFT_CLASS("_TtC8GoChange21ResultsViewController")
@interface ResultsViewController : UIViewController <UIScrollViewDelegate, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified resultsTable;
@property (nonatomic, strong) NSMutableArray * _Nonnull refArray;
@property (nonatomic, strong) NSMutableArray * _Nonnull resultArray;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)ResultLinkButton:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange14RetrieveChange")
@interface RetrieveChange : NSObject
- (nonnull instancetype)initWithChangeID:(NSString * _Nonnull)changeID completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end

@class FDataSnapshot;

SWIFT_CLASS("_TtC8GoChange27RetrieveDetailsFromFirebase")
@interface RetrieveDetailsFromFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, strong) NSMutableArray * _Nonnull results;
- (nonnull instancetype)initWithUserRefArray:(NSMutableArray * _Nonnull)userRefArray completionHandler:(void (^ _Nonnull)(FDataSnapshot * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange20RetrieveFromFirebase")
@interface RetrieveFromFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
- (nonnull instancetype)initWithCompletionHandler:(void (^ _Nonnull)(FDataSnapshot * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange17RetrieveSolutions")
@interface RetrieveSolutions : NSObject
- (nonnull instancetype)initWithChange:(Change * _Nonnull)change completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end


SWIFT_CLASS("_TtC8GoChange20SearchViewController")
@interface SearchViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified searchTextField;
@property (nonatomic, strong) NSMutableArray * _Nonnull returnedStringArray;
@property (nonatomic, strong) NSMutableArray * _Nonnull returnedRefArray;
@property (nonatomic, strong) NSMutableArray * _Nonnull countArray;
@property (nonatomic, readonly, strong) NSMutableArray * _Nonnull useRefArray;
@property (nonatomic, readonly, strong) NSMutableArray * _Nonnull foundArray;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)homeButtonClick:(UIButton * _Nonnull)sender;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (IBAction)searchForResults:(UIButton * _Nonnull)sender;
- (void)checkResults;
- (void)createRefArray;
- (void)sendToResults;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange20SignupViewController")
@interface SignupViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified usernameTextfield;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextfield;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextfield;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label1;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label2;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label3;
@property (nonatomic, copy) NSString * _Nonnull sendingController;
@property (nonatomic, copy) NSString * _Nonnull updateField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified signupButton;
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
- (void)viewDidLoad;
- (IBAction)signupButton:(UIButton * _Nonnull)sender;
- (void)updateChildValues;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (IBAction)cancelButton:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class Tweak;

SWIFT_CLASS("_TtC8GoChange8Solution")
@interface Solution : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull solutionName;
@property (nonatomic, copy) NSString * _Nonnull solutionDescription;
@property (nonatomic, strong) Change * _Nonnull solutionToChange;
@property (nonatomic, copy) NSArray<Tweak *> * _Nonnull solutionNeedingTweaking;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary context:(NSManagedObjectContext * _Nonnull)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange10TempChange")
@interface TempChange : NSObject
@property (nonatomic, copy) NSString * _Nonnull changeName;
@property (nonatomic, copy) NSString * _Nonnull changeDetail;
@property (nonatomic, strong) NSMutableArray * _Nonnull solutionNameArray;
@property (nonatomic, strong) NSMutableArray * _Nonnull solutionDetailArray;
@property (nonatomic, strong) NSMutableArray * _Nonnull tweakNameArray;
@property (nonatomic, strong) NSMutableArray * _Nonnull tweakDetailArray;
+ (TempChange * _Nonnull)sharedInstance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange5Tweak")
@interface Tweak : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull tweakName;
@property (nonatomic, copy) NSString * _Nonnull tweakDescription;
@property (nonatomic, strong) Solution * _Nonnull tweakForSolution;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary context:(NSManagedObjectContext * _Nonnull)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange24UpdateUserInfoController")
@interface UpdateUserInfoController : UIViewController
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, copy) NSString * _Nonnull currentlyUpdating;
- (void)viewDidLoad;
- (IBAction)updatePassword:(UIButton * _Nonnull)sender;
- (IBAction)updateUsername:(UIButton * _Nonnull)sender;
- (IBAction)updateEmail:(UIButton * _Nonnull)sender;
- (void)segueToInput;
- (IBAction)cancelUpdate:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange17WebViewController")
@interface WebViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange19loginViewController")
@interface loginViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextfield;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextfield;
@property (nonatomic, copy) NSString * _Nullable userID;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)login:(id _Nonnull)sender;
- (IBAction)signupControl:(UIButton * _Nonnull)sender;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)didReceiveMemoryWarning;
- (void)segueToHomeScreen;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
