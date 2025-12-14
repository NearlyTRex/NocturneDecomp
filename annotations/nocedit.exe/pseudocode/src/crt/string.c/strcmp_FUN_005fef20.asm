; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[51]:
;   core_ammo.cpp_CAmmo_FUN_00410fd0 at 00411087
;   core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0 at 00411422
;   core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 at 0043e0f0
;   core_curtain.cpp_FUN_0044a920 at 0044a990
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044f5ec
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 at 0044de3a
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0 at 004701b9
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 at 00470079
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 at 004826cd
;   core_emitter.cpp_FUN_004a8070 at 004a8094
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 005fef20
        ;   Label: crt_string.c_strcmp_FUN_005fef20
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fef21
    MOV EDX,dword ptr [ESP + 0xc]       ; 005fef25
    PUSH EBX                            ; 005fef29
    PUSH ECX                            ; 005fef2a
    MOV EBX,EAX                         ; 005fef2b
    CMP EAX,EDX                         ; 005fef2d
    JZ 0x005fef9d                       ; 005fef2f
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    MOV EAX,dword ptr [EBX]             ; 005fef31
        ;   Label: LAB_005fef31
    MOV ECX,dword ptr [EDX]             ; 005fef33
    CMP ECX,EAX                         ; 005fef35
    JNZ 0x005fefa3                      ; 005fef37
        ;   XREF to: 005fefa3 (CONDITIONAL_JUMP)  ; LAB_005fefa3
    NOT ECX                             ; 005fef39
    ADD EAX,0xfefefeff                  ; 005fef3b
    AND EAX,ECX                         ; 005fef40
    AND EAX,0x80808080                  ; 005fef42
    JNZ 0x005fef9d                      ; 005fef47
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    MOV EAX,dword ptr [EBX + 0x4]       ; 005fef49
    MOV ECX,dword ptr [EDX + 0x4]       ; 005fef4c
    CMP ECX,EAX                         ; 005fef4f
    JNZ 0x005fefa3                      ; 005fef51
        ;   XREF to: 005fefa3 (CONDITIONAL_JUMP)  ; LAB_005fefa3
    NOT ECX                             ; 005fef53
    ADD EAX,0xfefefeff                  ; 005fef55
    AND EAX,ECX                         ; 005fef5a
    AND EAX,0x80808080                  ; 005fef5c
    JNZ 0x005fef9d                      ; 005fef61
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fef63
    MOV ECX,dword ptr [EDX + 0x8]       ; 005fef66
    CMP ECX,EAX                         ; 005fef69
    JNZ 0x005fefa3                      ; 005fef6b
        ;   XREF to: 005fefa3 (CONDITIONAL_JUMP)  ; LAB_005fefa3
    NOT ECX                             ; 005fef6d
    ADD EAX,0xfefefeff                  ; 005fef6f
    AND EAX,ECX                         ; 005fef74
    AND EAX,0x80808080                  ; 005fef76
    JNZ 0x005fef9d                      ; 005fef7b
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    MOV EAX,dword ptr [EBX + 0xc]       ; 005fef7d
    MOV ECX,dword ptr [EDX + 0xc]       ; 005fef80
    CMP ECX,EAX                         ; 005fef83
    JNZ 0x005fefa3                      ; 005fef85
        ;   XREF to: 005fefa3 (CONDITIONAL_JUMP)  ; LAB_005fefa3
    ADD EBX,0x10                        ; 005fef87
    ADD EDX,0x10                        ; 005fef8a
    NOT ECX                             ; 005fef8d
    ADD EAX,0xfefefeff                  ; 005fef8f
    AND EAX,ECX                         ; 005fef94
    AND EAX,0x80808080                  ; 005fef96
    JZ 0x005fef31                       ; 005fef9b
        ;   XREF to: 005fef31 (CONDITIONAL_JUMP)  ; LAB_005fef31
    SUB EAX,EAX                         ; 005fef9d
        ;   Label: LAB_005fef9d
    POP ECX                             ; 005fef9f
    POP EBX                             ; 005fefa0
    POP EDX                             ; 005fefa1
    RET                                 ; 005fefa2
    CMP AL,CL                           ; 005fefa3
        ;   Label: LAB_005fefa3
    JNZ 0x005fefc4                      ; 005fefa5
        ;   XREF to: 005fefc4 (CONDITIONAL_JUMP)  ; LAB_005fefc4
    CMP AL,0x0                          ; 005fefa7
    JZ 0x005fef9d                       ; 005fefa9
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    CMP AH,CH                           ; 005fefab
    JNZ 0x005fefc4                      ; 005fefad
        ;   XREF to: 005fefc4 (CONDITIONAL_JUMP)  ; LAB_005fefc4
    CMP AH,0x0                          ; 005fefaf
    JZ 0x005fef9d                       ; 005fefb2
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    SHR EAX,0x10                        ; 005fefb4
    SHR ECX,0x10                        ; 005fefb7
    CMP AL,CL                           ; 005fefba
    JNZ 0x005fefc4                      ; 005fefbc
        ;   XREF to: 005fefc4 (CONDITIONAL_JUMP)  ; LAB_005fefc4
    CMP AL,0x0                          ; 005fefbe
    JZ 0x005fef9d                       ; 005fefc0
        ;   XREF to: 005fef9d (CONDITIONAL_JUMP)  ; LAB_005fef9d
    CMP AH,CH                           ; 005fefc2
    SBB EAX,EAX                         ; 005fefc4
        ;   Label: LAB_005fefc4
    OR AL,0x1                           ; 005fefc6
    POP ECX                             ; 005fefc8
    POP EBX                             ; 005fefc9
    POP EDX                             ; 005fefca
    RET                                 ; 005fefcb

