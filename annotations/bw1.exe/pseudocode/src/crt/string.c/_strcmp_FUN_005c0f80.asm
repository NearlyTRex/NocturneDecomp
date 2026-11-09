; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strcmp_FUN_005c0f80(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[34]:
;   core_ammo.cpp_FUN_0040ddd0 at 0040ddef
;   core_cloth.cpp_CCloth_grabCloth_FUN_00442100 at 00442120
;   core_curtain.cpp_FUN_0044b6f0 at 0044b767
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004501f2
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0 at 0044e90a
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_0045d900 at 0045d919
;   core_dfilter.cpp_FUN_0045d7c0 at 0045d7d9
;   core_door.cpp_CDoor_setup_FUN_00477450 at 0047747a
;   core_dpart.cpp_FUN_00479c70 at 00479d7d
;   core_emitter.cpp_FUN_0049f310 at 0049f334
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 005c0f80
        ;   Label: crt_string.c__strcmp_FUN_005c0f80
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c0f81
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c0f85
    PUSH EBX                            ; 005c0f89
    PUSH ECX                            ; 005c0f8a
    MOV EBX,EAX                         ; 005c0f8b
    CMP EAX,EDX                         ; 005c0f8d
    JZ 0x005c0ffd                       ; 005c0f8f
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    MOV EAX,dword ptr [EBX]             ; 005c0f91
        ;   Label: LAB_005c0f91
    MOV ECX,dword ptr [EDX]             ; 005c0f93
    CMP ECX,EAX                         ; 005c0f95
    JNZ 0x005c1003                      ; 005c0f97
        ;   XREF to: 005c1003 (CONDITIONAL_JUMP)  ; LAB_005c1003
    NOT ECX                             ; 005c0f99
    ADD EAX,0xfefefeff                  ; 005c0f9b
    AND EAX,ECX                         ; 005c0fa0
    AND EAX,0x80808080                  ; 005c0fa2
    JNZ 0x005c0ffd                      ; 005c0fa7
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c0fa9
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c0fac
    CMP ECX,EAX                         ; 005c0faf
    JNZ 0x005c1003                      ; 005c0fb1
        ;   XREF to: 005c1003 (CONDITIONAL_JUMP)  ; LAB_005c1003
    NOT ECX                             ; 005c0fb3
    ADD EAX,0xfefefeff                  ; 005c0fb5
    AND EAX,ECX                         ; 005c0fba
    AND EAX,0x80808080                  ; 005c0fbc
    JNZ 0x005c0ffd                      ; 005c0fc1
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0fc3
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c0fc6
    CMP ECX,EAX                         ; 005c0fc9
    JNZ 0x005c1003                      ; 005c0fcb
        ;   XREF to: 005c1003 (CONDITIONAL_JUMP)  ; LAB_005c1003
    NOT ECX                             ; 005c0fcd
    ADD EAX,0xfefefeff                  ; 005c0fcf
    AND EAX,ECX                         ; 005c0fd4
    AND EAX,0x80808080                  ; 005c0fd6
    JNZ 0x005c0ffd                      ; 005c0fdb
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c0fdd
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c0fe0
    CMP ECX,EAX                         ; 005c0fe3
    JNZ 0x005c1003                      ; 005c0fe5
        ;   XREF to: 005c1003 (CONDITIONAL_JUMP)  ; LAB_005c1003
    ADD EBX,0x10                        ; 005c0fe7
    ADD EDX,0x10                        ; 005c0fea
    NOT ECX                             ; 005c0fed
    ADD EAX,0xfefefeff                  ; 005c0fef
    AND EAX,ECX                         ; 005c0ff4
    AND EAX,0x80808080                  ; 005c0ff6
    JZ 0x005c0f91                       ; 005c0ffb
        ;   XREF to: 005c0f91 (CONDITIONAL_JUMP)  ; LAB_005c0f91
    SUB EAX,EAX                         ; 005c0ffd
        ;   Label: LAB_005c0ffd
    POP ECX                             ; 005c0fff
    POP EBX                             ; 005c1000
    POP EDX                             ; 005c1001
    RET                                 ; 005c1002
    CMP AL,CL                           ; 005c1003
        ;   Label: LAB_005c1003
    JNZ 0x005c1024                      ; 005c1005
        ;   XREF to: 005c1024 (CONDITIONAL_JUMP)  ; LAB_005c1024
    CMP AL,0x0                          ; 005c1007
    JZ 0x005c0ffd                       ; 005c1009
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    CMP AH,CH                           ; 005c100b
    JNZ 0x005c1024                      ; 005c100d
        ;   XREF to: 005c1024 (CONDITIONAL_JUMP)  ; LAB_005c1024
    CMP AH,0x0                          ; 005c100f
    JZ 0x005c0ffd                       ; 005c1012
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    SHR EAX,0x10                        ; 005c1014
    SHR ECX,0x10                        ; 005c1017
    CMP AL,CL                           ; 005c101a
    JNZ 0x005c1024                      ; 005c101c
        ;   XREF to: 005c1024 (CONDITIONAL_JUMP)  ; LAB_005c1024
    CMP AL,0x0                          ; 005c101e
    JZ 0x005c0ffd                       ; 005c1020
        ;   XREF to: 005c0ffd (CONDITIONAL_JUMP)  ; LAB_005c0ffd
    CMP AH,CH                           ; 005c1022
    SBB EAX,EAX                         ; 005c1024
        ;   Label: LAB_005c1024
    OR AL,0x1                           ; 005c1026
    POP ECX                             ; 005c1028
    POP EBX                             ; 005c1029
    POP EDX                             ; 005c102a
    RET                                 ; 005c102b

