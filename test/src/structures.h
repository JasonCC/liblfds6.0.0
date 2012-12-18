/***** structs *****/
#pragma pack( push, LFDS600_ALIGN_DOUBLE_POINTER )

/***** abstraction tests *****/
struct abstraction_test_dcas_state
{
  volatile lfds600_atom_t
    *shared_counter;

  lfds600_atom_t
    local_counter;
};

/***** freelist tests *****/
struct freelist_test_popping_state
{
  struct lfds600_freelist_state
    *fs,
    *fs_thread_local;
};

struct freelist_test_pushing_state
{
  lfds600_atom_t
    thread_number;

  struct lfds600_freelist_state
    *source_fs,
    *fs;
};

struct freelist_test_popping_and_pushing_state
{
  struct lfds600_freelist_state
    *local_fs,
    *fs;
};

struct freelist_test_counter_and_thread_number
{
  lfds600_atom_t
    thread_number;

  unsigned long long int
    counter;
};

/***** queue tests *****/
struct queue_test_enqueuing_state
{
  struct lfds600_queue_state
    *qs;

  lfds600_atom_t
    counter;
};

struct queue_test_dequeuing_state
{
  struct lfds600_queue_state
    *qs;

  int
    error_flag;
};

struct queue_test_enqueuing_and_dequeuing_state
{
  struct lfds600_queue_state
    *qs;

  lfds600_atom_t
    counter,
    thread_number,
    *per_thread_counters;

  unsigned int
    cpu_count;

  int
    error_flag;
};

struct queue_test_rapid_enqueuing_and_dequeuing_state
{
  struct lfds600_queue_state
    *qs;

  lfds600_atom_t
    counter;
};

/***** ringbuffer tests *****/
struct ringbuffer_test_reading_state
{
  struct lfds600_ringbuffer_state
    *rs;

  int
    error_flag;

  lfds600_atom_t
    read_count;
};

struct ringbuffer_test_writing_state
{
  struct lfds600_ringbuffer_state
    *rs;

  lfds600_atom_t
    write_count;
};

struct ringbuffer_test_reading_and_writing_state
{
  struct lfds600_ringbuffer_state
    *rs;

  lfds600_atom_t
    counter,
    *per_thread_counters;

  unsigned int
    cpu_count;

  int
    error_flag;
};

/***** slist tests *****/
struct lfds600_slist_thread_start_state
{
  struct lfds600_slist_state
    *ss;

  struct lfds600_slist_element
    *se;

  time_t
    duration;

  unsigned long int
    iteration_modulo;
};

/***** stack tests *****/

/***** freelist benchmarks *****/
struct lfds600_freelist_benchmark
{
  struct lfds600_freelist_state
    *fs;

  lfds600_atom_t
    operation_count;
};

/***** queue benchmarks *****/
struct lfds600_queue_benchmark
{
  struct lfds600_queue_state
    *qs;

  lfds600_atom_t
    operation_count;
};

/***** ringbuffer benchmarks *****/
struct lfds600_ringbuffer_benchmark
{
  struct lfds600_ringbuffer_state
    *rs;

  lfds600_atom_t
    operation_count;
};

/***** stack benchmarks *****/
struct lfds600_stack_benchmark
{
  struct lfds600_stack_state
    *ss;

  lfds600_atom_t
    operation_count;
};

#pragma pack( pop )

