; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strcmp_FUN_005a3d00(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[38]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a112f
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fe47
;   core_cloth.cpp_CCloth_grabCloth_FUN_0043fd60 at 0043fd80
;   core_curtain.cpp_CCurtain_process_FUN_00447830 at 004478a7
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c332
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044aa20 at 0044aa4a
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_00459850 at 00459869
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00459710 at 00459729
;   core_door.cpp_CDoor_setup_FUN_00463c90 at 00463cba
;   core_dpart.cpp_FUN_00466540 at 0046664d
;   ... and 28 more
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 005a3d00
        ;   Label: crt_string.c__strcmp_FUN_005a3d00
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3d01
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a3d05
    PUSH EBX                            ; 005a3d09
    PUSH ECX                            ; 005a3d0a
    MOV EBX,EAX                         ; 005a3d0b
    CMP EAX,EDX                         ; 005a3d0d
    JZ 0x005a3d7d                       ; 005a3d0f
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    MOV EAX,dword ptr [EBX]             ; 005a3d11
        ;   Label: LAB_005a3d11
    MOV ECX,dword ptr [EDX]             ; 005a3d13
    CMP ECX,EAX                         ; 005a3d15
    JNZ 0x005a3d83                      ; 005a3d17
        ;   XREF to: 005a3d83 (CONDITIONAL_JUMP)  ; LAB_005a3d83
    NOT ECX                             ; 005a3d19
    ADD EAX,0xfefefeff                  ; 005a3d1b
    AND EAX,ECX                         ; 005a3d20
    AND EAX,0x80808080                  ; 005a3d22
    JNZ 0x005a3d7d                      ; 005a3d27
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a3d29
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a3d2c
    CMP ECX,EAX                         ; 005a3d2f
    JNZ 0x005a3d83                      ; 005a3d31
        ;   XREF to: 005a3d83 (CONDITIONAL_JUMP)  ; LAB_005a3d83
    NOT ECX                             ; 005a3d33
    ADD EAX,0xfefefeff                  ; 005a3d35
    AND EAX,ECX                         ; 005a3d3a
    AND EAX,0x80808080                  ; 005a3d3c
    JNZ 0x005a3d7d                      ; 005a3d41
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a3d43
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a3d46
    CMP ECX,EAX                         ; 005a3d49
    JNZ 0x005a3d83                      ; 005a3d4b
        ;   XREF to: 005a3d83 (CONDITIONAL_JUMP)  ; LAB_005a3d83
    NOT ECX                             ; 005a3d4d
    ADD EAX,0xfefefeff                  ; 005a3d4f
    AND EAX,ECX                         ; 005a3d54
    AND EAX,0x80808080                  ; 005a3d56
    JNZ 0x005a3d7d                      ; 005a3d5b
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a3d5d
    MOV ECX,dword ptr [EDX + 0xc]       ; 005a3d60
    CMP ECX,EAX                         ; 005a3d63
    JNZ 0x005a3d83                      ; 005a3d65
        ;   XREF to: 005a3d83 (CONDITIONAL_JUMP)  ; LAB_005a3d83
    ADD EBX,0x10                        ; 005a3d67
    ADD EDX,0x10                        ; 005a3d6a
    NOT ECX                             ; 005a3d6d
    ADD EAX,0xfefefeff                  ; 005a3d6f
    AND EAX,ECX                         ; 005a3d74
    AND EAX,0x80808080                  ; 005a3d76
    JZ 0x005a3d11                       ; 005a3d7b
        ;   XREF to: 005a3d11 (CONDITIONAL_JUMP)  ; LAB_005a3d11
    SUB EAX,EAX                         ; 005a3d7d
        ;   Label: LAB_005a3d7d
    POP ECX                             ; 005a3d7f
    POP EBX                             ; 005a3d80
    POP EDX                             ; 005a3d81
    RET                                 ; 005a3d82
    CMP AL,CL                           ; 005a3d83
        ;   Label: LAB_005a3d83
    JNZ 0x005a3da4                      ; 005a3d85
        ;   XREF to: 005a3da4 (CONDITIONAL_JUMP)  ; LAB_005a3da4
    CMP AL,0x0                          ; 005a3d87
    JZ 0x005a3d7d                       ; 005a3d89
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    CMP AH,CH                           ; 005a3d8b
    JNZ 0x005a3da4                      ; 005a3d8d
        ;   XREF to: 005a3da4 (CONDITIONAL_JUMP)  ; LAB_005a3da4
    CMP AH,0x0                          ; 005a3d8f
    JZ 0x005a3d7d                       ; 005a3d92
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    SHR EAX,0x10                        ; 005a3d94
    SHR ECX,0x10                        ; 005a3d97
    CMP AL,CL                           ; 005a3d9a
    JNZ 0x005a3da4                      ; 005a3d9c
        ;   XREF to: 005a3da4 (CONDITIONAL_JUMP)  ; LAB_005a3da4
    CMP AL,0x0                          ; 005a3d9e
    JZ 0x005a3d7d                       ; 005a3da0
        ;   XREF to: 005a3d7d (CONDITIONAL_JUMP)  ; LAB_005a3d7d
    CMP AH,CH                           ; 005a3da2
    SBB EAX,EAX                         ; 005a3da4
        ;   Label: LAB_005a3da4
    OR AL,0x1                           ; 005a3da6
    POP ECX                             ; 005a3da8
    POP EBX                             ; 005a3da9
    POP EDX                             ; 005a3daa
    RET                                 ; 005a3dab

