; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strcmp_FUN_005b8c30(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[50]:
;   core_ammo.cpp_FUN_0040e240 at 0040e25f
;   core_charactr.cpp_FUN_0042b440 at 0042b45a
;   core_cloth.cpp_CCloth_grabCloth_FUN_005b18e0 at 005b1900
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043eb32
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220 at 0043d24a
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_004477a0 at 004477b9
;   core_dfilter.cpp_FUN_00447660 at 00447679
;   core_doc.cpp_FUN_00450620 at 00450941
;   core_doc.cpp_FUN_004568e0 at 00457adc
;   core_dog1.cpp_FUN_005abdd0 at 005abe28
;   ... and 40 more
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 005b8c30
        ;   Label: crt_string.c__strcmp_FUN_005b8c30
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b8c31
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8c35
    PUSH EBX                            ; 005b8c39
    PUSH ECX                            ; 005b8c3a
    MOV EBX,EAX                         ; 005b8c3b
    CMP EAX,EDX                         ; 005b8c3d
    JZ 0x005b8cad                       ; 005b8c3f
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    MOV EAX,dword ptr [EBX]             ; 005b8c41
        ;   Label: LAB_005b8c41
    MOV ECX,dword ptr [EDX]             ; 005b8c43
    CMP ECX,EAX                         ; 005b8c45
    JNZ 0x005b8cb3                      ; 005b8c47
        ;   XREF to: 005b8cb3 (CONDITIONAL_JUMP)  ; LAB_005b8cb3
    NOT ECX                             ; 005b8c49
    ADD EAX,0xfefefeff                  ; 005b8c4b
    AND EAX,ECX                         ; 005b8c50
    AND EAX,0x80808080                  ; 005b8c52
    JNZ 0x005b8cad                      ; 005b8c57
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b8c59
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b8c5c
    CMP ECX,EAX                         ; 005b8c5f
    JNZ 0x005b8cb3                      ; 005b8c61
        ;   XREF to: 005b8cb3 (CONDITIONAL_JUMP)  ; LAB_005b8cb3
    NOT ECX                             ; 005b8c63
    ADD EAX,0xfefefeff                  ; 005b8c65
    AND EAX,ECX                         ; 005b8c6a
    AND EAX,0x80808080                  ; 005b8c6c
    JNZ 0x005b8cad                      ; 005b8c71
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8c73
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b8c76
    CMP ECX,EAX                         ; 005b8c79
    JNZ 0x005b8cb3                      ; 005b8c7b
        ;   XREF to: 005b8cb3 (CONDITIONAL_JUMP)  ; LAB_005b8cb3
    NOT ECX                             ; 005b8c7d
    ADD EAX,0xfefefeff                  ; 005b8c7f
    AND EAX,ECX                         ; 005b8c84
    AND EAX,0x80808080                  ; 005b8c86
    JNZ 0x005b8cad                      ; 005b8c8b
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    MOV EAX,dword ptr [EBX + 0xc]       ; 005b8c8d
    MOV ECX,dword ptr [EDX + 0xc]       ; 005b8c90
    CMP ECX,EAX                         ; 005b8c93
    JNZ 0x005b8cb3                      ; 005b8c95
        ;   XREF to: 005b8cb3 (CONDITIONAL_JUMP)  ; LAB_005b8cb3
    ADD EBX,0x10                        ; 005b8c97
    ADD EDX,0x10                        ; 005b8c9a
    NOT ECX                             ; 005b8c9d
    ADD EAX,0xfefefeff                  ; 005b8c9f
    AND EAX,ECX                         ; 005b8ca4
    AND EAX,0x80808080                  ; 005b8ca6
    JZ 0x005b8c41                       ; 005b8cab
        ;   XREF to: 005b8c41 (CONDITIONAL_JUMP)  ; LAB_005b8c41
    SUB EAX,EAX                         ; 005b8cad
        ;   Label: LAB_005b8cad
    POP ECX                             ; 005b8caf
    POP EBX                             ; 005b8cb0
    POP EDX                             ; 005b8cb1
    RET                                 ; 005b8cb2
    CMP AL,CL                           ; 005b8cb3
        ;   Label: LAB_005b8cb3
    JNZ 0x005b8cd4                      ; 005b8cb5
        ;   XREF to: 005b8cd4 (CONDITIONAL_JUMP)  ; LAB_005b8cd4
    CMP AL,0x0                          ; 005b8cb7
    JZ 0x005b8cad                       ; 005b8cb9
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    CMP AH,CH                           ; 005b8cbb
    JNZ 0x005b8cd4                      ; 005b8cbd
        ;   XREF to: 005b8cd4 (CONDITIONAL_JUMP)  ; LAB_005b8cd4
    CMP AH,0x0                          ; 005b8cbf
    JZ 0x005b8cad                       ; 005b8cc2
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    SHR EAX,0x10                        ; 005b8cc4
    SHR ECX,0x10                        ; 005b8cc7
    CMP AL,CL                           ; 005b8cca
    JNZ 0x005b8cd4                      ; 005b8ccc
        ;   XREF to: 005b8cd4 (CONDITIONAL_JUMP)  ; LAB_005b8cd4
    CMP AL,0x0                          ; 005b8cce
    JZ 0x005b8cad                       ; 005b8cd0
        ;   XREF to: 005b8cad (CONDITIONAL_JUMP)  ; LAB_005b8cad
    CMP AH,CH                           ; 005b8cd2
    SBB EAX,EAX                         ; 005b8cd4
        ;   Label: LAB_005b8cd4
    OR AL,0x1                           ; 005b8cd6
    POP ECX                             ; 005b8cd8
    POP EBX                             ; 005b8cd9
    POP EDX                             ; 005b8cda
    RET                                 ; 005b8cdb

