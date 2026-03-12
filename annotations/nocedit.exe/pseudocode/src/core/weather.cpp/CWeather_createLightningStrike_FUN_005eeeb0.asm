; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(CWeather *this_ptr,float flash_timer,int play_sound)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   flash_timer
; int              Stack[0xc]:4   play_sound
; Local Variables:
; float            Stack[-0x98]:4  local_98
; CMatrix3x3f      Stack[-0x94]:36  local_94
; CVector3f        Stack[-0x6c]:12  local_6c
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac2bc
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 005065b6
;   core_weather.cpp_CWeather_update_FUN_005eeaf0 at 005eedc3
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eeeb0
        ;   Label: core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0
    PUSH EDI                            ; 005eeeb1
    PUSH EBP                            ; 005eeeb2
    MOV EBP,ESP                         ; 005eeeb3
    SUB ESP,0x88                        ; 005eeeb5
    AND ESP,0xfffffff8                  ; 005eeebb
    MOV EBX,dword ptr [EBP + 0x10]      ; 005eeebe
    PUSH 0x41a00000                     ; 005eeec1
    PUSH 0x41200000                     ; 005eeec6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005eeecb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

