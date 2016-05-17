/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/2k/9k7dfbw97q72jc6dy3n092sc0000gs/T/vinicius/audioduck-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/2k/9k7dfbw97q72jc6dy3n092sc0000gs/T/vinicius/audioduck-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "android.duck.audio.AudioDuckModule.h"


#line 13 "/private/var/folders/2k/9k7dfbw97q72jc6dy3n092sc0000gs/T/vinicius/audioduck-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class AudioDuckBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AudioDuckBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AudioDuckBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 34,
      MAX_WORD_LENGTH = 34,
      MIN_HASH_VALUE = 34,
      MAX_HASH_VALUE = 34
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 15 "/private/var/folders/2k/9k7dfbw97q72jc6dy3n092sc0000gs/T/vinicius/audioduck-generated/KrollGeneratedBindings.gperf"
      {"android.duck.audio.AudioDuckModule", ::android::duck::audio::AudioDuckModule::bindProxy, ::android::duck::audio::AudioDuckModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/2k/9k7dfbw97q72jc6dy3n092sc0000gs/T/vinicius/audioduck-generated/KrollGeneratedBindings.gperf"

