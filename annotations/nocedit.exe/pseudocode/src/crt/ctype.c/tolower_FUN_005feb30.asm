; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_tolower_FUN_005feb30(int character)
;
; Parameters:
; int              Stack[0x4]:4   character
;
; XREF[10]:
;   core_actor.cpp_getActorClassByName_FUN_0040c3c0 at 0040c40b
;   core_actor.cpp_hashClassName_FUN_0040c290 at 0040c2b5
;   core_actor.cpp_matchClassTerm_FUN_0040c4f0 at 0040c5b2
;   core_actor.cpp_registerActorClass_FUN_0040c2e0 at 0040c372
;   core_actor.cpp_updateClassNameHash_FUN_0040c260 at 0040c265
;   crt_io.c_getFileStat_FUN_00607e64 at 00607fd1
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c at 0060192b
;   crt_stdio.c_char_to_digit_FUN_006058e8 at 006058fb
;   crt_stdlib.c_charToDigit_FUN_0060ee18 at 0060ee33
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 at 004a6ea7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005feb30
        ;   Label: crt_ctype.c_tolower_FUN_005feb30
    CMP EAX,0x41                        ; 005feb34
    JL 0x005feb41                       ; 005feb37
        ;   XREF to: 005feb41 (CONDITIONAL_JUMP)  ; LAB_005feb41
    CMP EAX,0x5a                        ; 005feb39
    JG 0x005feb41                       ; 005feb3c
        ;   XREF to: 005feb41 (CONDITIONAL_JUMP)  ; LAB_005feb41
    ADD EAX,0x20                        ; 005feb3e
    RET                                 ; 005feb41
        ;   Label: LAB_005feb41

