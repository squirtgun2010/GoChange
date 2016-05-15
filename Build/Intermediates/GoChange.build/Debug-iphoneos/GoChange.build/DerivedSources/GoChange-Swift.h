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
@import ObjectiveC;
@import Foundation;
@import CoreData;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class Problem;
@class UIButton;
@class UITextField;
@class UITextView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC8GoChange21AddIdeaViewController")
@interface AddIdeaViewController : UIViewController <UIScrollViewDelegate, UITextViewDelegate, UITableViewDelegate, UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameTextField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailTextView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addNameButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addDetailButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addSolution;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified petitionButton;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified petitionTextField;
@property (nonatomic, copy) NSString * _Null_unspecified currentNameData;
@property (nonatomic, copy) NSString * _Null_unspecified currentDetailData;
@property (nonatomic, copy) NSString * _Null_unspecified viewControllerStatus;
@property (nonatomic, strong) Problem * _Null_unspecified problem;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)doneAddingIdea:(UIButton * _Nonnull)sender;
- (IBAction)addNameClick:(id _Nonnull)sender;
- (IBAction)addDetailClick:(UIButton * _Nonnull)sender;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (IBAction)addPetition:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC8GoChange11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;

SWIFT_CLASS("_TtC8GoChange13ChangeOrgCode")
@interface ChangeOrgCode : NSObject
@property (nonatomic) NSInteger petitionId;
@property (nonatomic, strong) NSURLSession * _Nonnull session;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull parameterDictionary;
- (nonnull instancetype)initWithPetitionURL:(NSString * _Nonnull)petitionURL completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
- (void)performCall:(void (^ _Nonnull)(NSInteger))completionHandler;
- (void)gatherPetitionData:(NSInteger)result completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler;
@end

@class Firebase;

SWIFT_CLASS("_TtC8GoChange15CheckForNetwork")
@interface CheckForNetwork : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified connectedRef;
- (nonnull instancetype)initWithCompletionHandler:(void (^ _Nonnull)(NSString * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end

@class Solution;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC8GoChange9CheckVote")
@interface CheckVote : NSObject
- (nonnull instancetype)initWithSolutionID:(NSString * _Nonnull)solutionID completionHandler:(void (^ _Nonnull)(Solution * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

SWIFT_CLASS("_TtC8GoChange27CreateProblemViewController")
@interface CreateProblemViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailsField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified namePlusButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified detailsPlusButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified postButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addASolutionButton;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified solutionTable;
@property (nonatomic, copy) NSString * _Nonnull currentNameData;
@property (nonatomic, copy) NSString * _Nonnull currentDetailData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (IBAction)homeButtonClick:(UIButton * _Nonnull)sender;
- (IBAction)nameActionButton:(UIButton * _Nonnull)sender;
- (IBAction)detailsActionButton:(UIButton * _Nonnull)sender;
- (IBAction)addSolution:(UIButton * _Nonnull)sender;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (IBAction)PostInfo:(UIButton * _Nonnull)sender;
- (void)presentAlert:(NSString * _Nonnull)alertType;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;

SWIFT_CLASS("_TtC8GoChange19CustomTableViewCell")
@interface CustomTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified problemName;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified ownerName;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified voteCount;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange25DeleteProblemFromCoreData")
@interface DeleteProblemFromCoreData : NSObject
@property (nonatomic, strong) Problem * _Null_unspecified problem;
- (nonnull instancetype)initWithProblem:(Problem * _Nonnull)problem OBJC_DESIGNATED_INITIALIZER;
- (void)deleteCoreDataSolutions;
- (void)deleteCoreDataProblem;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end


SWIFT_CLASS("_TtC8GoChange17FindRecentProblem")
@interface FindRecentProblem : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified baseRef;
@property (nonatomic, copy) NSString * _Null_unspecified problemKey;
- (nonnull instancetype)initWithProblemName:(NSString * _Nonnull)problemName completionHandler:(void (^ _Nonnull)(id _Nonnull, id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
- (void)getProblemDetail:(void (^ _Nonnull)(id _Nonnull))completionHandler;
@end

@class NSFetchedResultsController;

SWIFT_CLASS("_TtC8GoChange23FollowingViewController")
@interface FollowingViewController : UITableViewController <NSFetchedResultsControllerDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified followingTableView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified homeButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)homeButtonClick:(UIButton * _Nonnull)sender;
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

@class FDataSnapshot;

SWIFT_CLASS("_TtC8GoChange16GetRecentlyAdded")
@interface GetRecentlyAdded : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
- (nonnull instancetype)initWithCompletionHandler:(void (^ _Nonnull)(FDataSnapshot * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange14GoChangeClient")
@interface GoChangeClient : NSObject
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

@class UIActivityIndicatorView;

SWIFT_CLASS("_TtC8GoChange18HomeViewController")
@interface HomeViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified welcomeLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified followButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified followingLabel;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified startActivityIndicator;
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (IBAction)createProblem:(UIButton * _Nonnull)sender;
- (IBAction)addUserData:(UIButton * _Nonnull)sender;
- (void)checkCoreData;
- (IBAction)logout:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class NSEntityDescription;

SWIFT_CLASS("_TtC8GoChange7Problem")
@interface Problem : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull problemName;
@property (nonatomic, copy) NSString * _Nonnull problemDescription;
@property (nonatomic, copy) NSString * _Nonnull problemID;
@property (nonatomic, strong) NSNumber * _Nonnull solutionCount;
@property (nonatomic, copy) NSString * _Nonnull problemOwner;
@property (nonatomic, copy) NSArray<Solution *> * _Nonnull problemNeedingSolution;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary context:(NSManagedObjectContext * _Nonnull)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange21ResultsViewController")
@interface ResultsViewController : UIViewController <UIScrollViewDelegate, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified resultsTable;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull refArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull resultNameArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull resultDetailArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull resultSolutionCountArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull problemOwnerArray;
- (void)viewDidLoad;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange28RetrieveAllNamesFromFirebase")
@interface RetrieveAllNamesFromFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified nameRef;
- (nonnull instancetype)initWithCompletionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange27RetrieveDetailsFromFirebase")
@interface RetrieveDetailsFromFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull results;
- (nonnull instancetype)initWithUserRefArray:(NSArray<NSString *> * _Nonnull)userRefArray completionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange25RetrieveNamesFromFirebase")
@interface RetrieveNamesFromFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified nameRef;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull nameResults;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull ownerResults;
- (nonnull instancetype)initWithProblemArray:(NSArray<NSString *> * _Nonnull)problemArray completionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange15RetrieveProblem")
@interface RetrieveProblem : NSObject
- (nonnull instancetype)initWithProblemID:(NSString * _Nonnull)problemID completionHandler:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end


SWIFT_CLASS("_TtC8GoChange29RetrieveSolutionCountFirebase")
@interface RetrieveSolutionCountFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified nameRef;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull resultsArray;
- (nonnull instancetype)initWithProblemArray:(NSArray<NSString *> * _Nonnull)problemArray completionHandler:(void (^ _Nonnull)(NSArray<NSNumber *> * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange17RetrieveSolutions")
@interface RetrieveSolutions : NSObject
- (nonnull instancetype)initWithProblem:(Problem * _Nonnull)problem completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end


SWIFT_CLASS("_TtC8GoChange29RetrieveSolutionsFromFirebase")
@interface RetrieveSolutionsFromFirebase : NSObject
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, strong) Firebase * _Null_unspecified problemRef;
@property (nonatomic, strong) Problem * _Null_unspecified problem;
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull localSolutionIDArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull nonMatches;
- (nonnull instancetype)initWithProblemID:(NSString * _Nonnull)problemID problem:(Problem * _Nullable)problem caller:(NSString * _Nonnull)caller completionHandler:(void (^ _Nonnull)(FDataSnapshot * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
- (void)createLocalArray;
- (void)compareArraysForMatches;
- (void)retrieveMatchedSolutionsFromFirebase;
- (void)updateCoreDataSolutions;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
@end

@class NSMutableArray;

SWIFT_CLASS("_TtC8GoChange14SaveNewProblem")
@interface SaveNewProblem : NSObject
@property (nonatomic, copy) NSString * _Nullable problemID;
@property (nonatomic, strong) Problem * _Null_unspecified newProblem;
@property (nonatomic, strong) NSMutableArray * _Nonnull solutionIDArray;
- (nonnull instancetype)initWithCompletionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)saveProblemToFirebase;
- (void)saveDetailsToFirebase;
- (void)saveSolutionsToFirebase;
- (void)createCoreDataProblem:(void (^ _Nonnull)(id _Nonnull))completionHandler;
- (void)createCoreDataSolutions;
@end


SWIFT_CLASS("_TtC8GoChange15SaveNewSolution")
@interface SaveNewSolution : NSObject
@property (nonatomic, strong) Problem * _Null_unspecified existingProblem;
@property (nonatomic, strong) NSMutableArray * _Nonnull solutionIDArray;
- (nonnull instancetype)initWithProblem:(Problem * _Nonnull)problem completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)saveSolutionsToFirebase;
- (void)createCoreDataSolutions;
- (void)adjustCoreDataProblem;
@end


SWIFT_CLASS("_TtC8GoChange20SaveResultToCoreData")
@interface SaveResultToCoreData : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, strong) Problem * _Null_unspecified newProblem;
- (nonnull instancetype)initWithProblemID:(NSString * _Nonnull)problemID completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)createCoreDataProblem:(void (^ _Nonnull)(id _Nonnull))completionHandler;
- (void)createCoreDataSolutions;
@end


SWIFT_CLASS("_TtC8GoChange16SearchController")
@interface SearchController : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified searchText;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull returnedNameArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull returnedRefArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull matchedNameArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull countArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull matchedRefArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull useNameArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull useOwnerArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull useDetailArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull useSolutionCountArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull refsNotInCoreData;
- (nonnull instancetype)initWithSearchText:(NSString * _Nonnull)searchText completionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSArray<NSNumber *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSString * _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
- (void)checkResults;
- (void)createRefArray:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSArray<NSNumber *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSString * _Nonnull))completionHandler;
- (void)checkIfInCoreData;
@end

@class UIStackView;

SWIFT_CLASS("_TtC8GoChange20SearchViewController")
@interface SearchViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified searchTextField;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified searchActivity;
@property (nonatomic, weak) IBOutlet UIStackView * _Null_unspecified recentProblemStack;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified recentProblemsLabel;
@property (nonatomic, copy) NSString * _Null_unspecified problemName;
@property (nonatomic, copy) NSString * _Null_unspecified problemDetail;
@property (nonatomic, copy) NSString * _Null_unspecified problemOwner;
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull recentNameArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull refArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull matchedProblemArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull problemsNotInCoreData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)checkIfInCoreData;
- (void)compareArrays;
- (void)createButtons:(NSString * _Nonnull)name;
- (IBAction)homeButtonClick:(UIButton * _Nonnull)sender;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (IBAction)searchForResults:(UIButton * _Nonnull)sender;
- (void)buttonClick:(UIButton * _Nonnull)sender;
- (void)presentRecentProblem;
- (void)presentAlert:(NSString * _Nonnull)alertType;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange20SignupViewController")
@interface SignupViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified usernameTextfield;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextfield;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextfield;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified signupButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label1;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label2;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label3;
@property (nonatomic, copy) NSString * _Nonnull sendingController;
@property (nonatomic, copy) NSString * _Nonnull updateField;
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
- (void)viewDidLoad;
- (IBAction)signupButton:(UIButton * _Nonnull)sender;
- (void)updateChildValues;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (IBAction)cancelButton:(UIButton * _Nonnull)sender;
- (void)presentAlert:(NSString * _Nonnull)alertType;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange8Solution")
@interface Solution : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull solutionName;
@property (nonatomic, copy) NSString * _Nonnull solutionDescription;
@property (nonatomic, strong) NSNumber * _Nonnull voteCount;
@property (nonatomic, copy) NSString * _Nonnull solutionID;
@property (nonatomic, copy) NSString * _Nonnull haveVotedFor;
@property (nonatomic, copy) NSString * _Nonnull solutionOwner;
@property (nonatomic, copy) NSString * _Nonnull petitionURL;
@property (nonatomic, strong) Problem * _Nonnull solutionToProblem;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary context:(NSManagedObjectContext * _Nonnull)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange8TempSave")
@interface TempSave : NSObject
@property (nonatomic, copy) NSString * _Nonnull problemName;
@property (nonatomic, copy) NSString * _Nonnull problemOwner;
@property (nonatomic, copy) NSString * _Nonnull problemDetail;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull solutionNameArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull solutionDetailArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull solutionVoteArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull solutionIDArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull solutionOwnerArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull petitionURLArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull newSolutionNameArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull newSolutionDetailArray;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull newSolutionVoteArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull newSolutionIDArray;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull newPetitionURLArray;
@property (nonatomic, copy) NSString * _Nonnull currentPetitionValue;
@property (nonatomic, strong) UIButton * _Null_unspecified retrievedRecentProblem;
@property (nonatomic) BOOL retrievedProblemFollowed;
@property (nonatomic) NSInteger RetrievedProblemsCount;
@property (nonatomic) BOOL RetrievedProblemsEmpty;
+ (TempSave * _Nonnull)sharedInstance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange23UpdateCoreDataSolutions")
@interface UpdateCoreDataSolutions : NSObject
@property (nonatomic, strong) Problem * _Null_unspecified existingProblem;
@property (nonatomic, strong) NSMutableArray * _Nonnull haveVotedArray;
- (nonnull instancetype)initWithProblem:(Problem * _Nonnull)problem OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)createCoreDataSolutions;
@end


SWIFT_CLASS("_TtC8GoChange24UpdateUserInfoController")
@interface UpdateUserInfoController : UIViewController
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, copy) NSString * _Nonnull currentlyUpdating;
- (IBAction)updatePassword:(UIButton * _Nonnull)sender;
- (IBAction)updateUsername:(UIButton * _Nonnull)sender;
- (IBAction)updateEmail:(UIButton * _Nonnull)sender;
- (void)segueToInput;
- (IBAction)cancelUpdate:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange27ViewFollowingViewController")
@interface ViewFollowingViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailsField;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified solutionTable;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified addASolutionButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified unfollowProblemButton;
@property (nonatomic, strong) Problem * _Null_unspecified problemClicked;
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, copy) NSString * _Null_unspecified solutionID;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull problemIDArray;
@property (nonatomic, copy) NSString * _Null_unspecified sendingController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)addSolutionClick:(UIButton * _Nonnull)sender;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)goBackHome;
- (IBAction)unfollowProblem:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange22ViewIdeaViewController")
@interface ViewIdeaViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified solutionNameField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified solutionDetailField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified viewPetitionButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified voteSolutionButton;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified petitionTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified secondPetitionTextField;
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, copy) NSString * _Null_unspecified solutionID;
@property (nonatomic, copy) NSString * _Null_unspecified viewControllerStatus;
@property (nonatomic, copy) NSString * _Null_unspecified loadedNameData;
@property (nonatomic, copy) NSString * _Null_unspecified loadedDetailData;
@property (nonatomic, copy) NSString * _Null_unspecified petitionURL;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)petitionButton:(UIButton * _Nonnull)sender;
- (IBAction)voteSolutionClick:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange24ViewResultViewController")
@interface ViewResultViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameField;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified detailsField;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified solutionTable;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified followProblemButton;
@property (nonatomic, copy) NSString * _Null_unspecified problemName;
@property (nonatomic, copy) NSString * _Null_unspecified problemDetail;
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, copy) NSString * _Null_unspecified owner;
@property (nonatomic, strong) Problem * _Null_unspecified currentProblem;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)followProblemClick:(UIButton * _Nonnull)sender;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange15VoteForSolution")
@interface VoteForSolution : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified problemID;
@property (nonatomic, copy) NSString * _Null_unspecified solutionID;
@property (nonatomic) NSInteger currentVoteCount;
- (nonnull instancetype)initWithProblemID:(NSString * _Nonnull)problemID solutionID:(NSString * _Nonnull)solutionID completionHandler:(void (^ _Nonnull)(id _Nonnull))completionHandler OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull sharedContext;
- (void)addVoteToCoreData;
- (void)addVoteToFirebase;
@end

@class UIBarButtonItem;
@class UIWebView;
@class NSURLRequest;

SWIFT_CLASS("_TtC8GoChange17WebViewController")
@interface WebViewController : UIViewController <UIWebViewDelegate>
@property (nonatomic, weak) IBOutlet UIWebView * _Null_unspecified webView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified petitionText;
@property (nonatomic, copy) NSString * _Null_unspecified currentURL;
@property (nonatomic, copy) NSString * _Nonnull urlString;
@property (nonatomic, copy) NSString * _Null_unspecified status;
@property (nonatomic, strong) UIBarButtonItem * _Null_unspecified linkPetitionButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)webViewDidStartLoad:(UIWebView * _Nonnull)webView;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (IBAction)linkPetitionClick:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GoChange19loginViewController")
@interface loginViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextfield;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextfield;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified loginActivityIndicator;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified loginButton;
@property (nonatomic, strong) Firebase * _Null_unspecified ref;
@property (nonatomic, copy) NSString * _Nullable userID;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)login:(id _Nonnull)sender;
- (IBAction)signupControl:(UIButton * _Nonnull)sender;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)segueToHomeScreen;
- (void)presentAlert:(NSString * _Nonnull)alertType;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
