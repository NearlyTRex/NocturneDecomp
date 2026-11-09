; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_fclose_FUN_005c0d10(int param_1)
;
;
; XREF[66]:
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438dba
;   cockpit_ckptutil.c_FUN_00438e40 at 00438f8f
;   cockpit_ckptutil.c_FUN_0043a040 at 0043a0d4
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 at 005384fe
;   cockpit_pkbitmap.cpp_FUN_00538130 at 0053815c
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538d23
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538e94
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0 at 0043eb5a
;   core_course.cpp_CCourse_load_FUN_00447db0 at 00447ea1
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004500b8
;   ... and 56 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626610 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626614 = 005c50d4
;   undefined4 DAT_02c9f050
;
; Called Functions:
;   crt_unknown.c_FUN_005c0d54
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0d10
        ;   Label: crt_stdio.c_fclose_FUN_005c0d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c0d11
    CALL dword ptr [0x00626610]         ; 005c0d15 | PTR_crt_unknown.c_FUN_005c50d4_00626610
    MOV EAX,[0x02c9f050]                ; 005c0d1b | DAT_02c9f050
    TEST EAX,EAX                        ; 005c0d20
    JNZ 0x005c0d31                      ; 005c0d22
        ;   XREF to: 005c0d31 (CONDITIONAL_JUMP)  ; LAB_005c0d31
    CALL dword ptr [0x00626614]         ; 005c0d24 | PTR_crt_unknown.c_FUN_005c50d4_00626614
        ;   Label: LAB_005c0d24
    MOV EAX,0xffffffff                  ; 005c0d2a
    POP EBX                             ; 005c0d2f
    RET                                 ; 005c0d30
    CMP EBX,dword ptr [EAX + 0x4]       ; 005c0d31
        ;   Label: LAB_005c0d31
    JZ 0x005c0d3e                       ; 005c0d34
        ;   XREF to: 005c0d3e (CONDITIONAL_JUMP)  ; LAB_005c0d3e
    MOV EAX,dword ptr [EAX]             ; 005c0d36
    TEST EAX,EAX                        ; 005c0d38
    JZ 0x005c0d24                       ; 005c0d3a
        ;   XREF to: 005c0d24 (CONDITIONAL_JUMP)  ; LAB_005c0d24
    JMP 0x005c0d31                      ; 005c0d3c
        ;   XREF to: 005c0d31 (UNCONDITIONAL_JUMP)  ; LAB_005c0d31
    CALL dword ptr [0x00626614]         ; 005c0d3e | PTR_crt_unknown.c_FUN_005c50d4_00626614
        ;   Label: LAB_005c0d3e
    PUSH 0x1                            ; 005c0d44
    PUSH EBX                            ; 005c0d46
    CALL crt_unknown.c_FUN_005c0d54     ; 005c0d47
        ;   XREF to: 005c0d54 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d54()
    ADD ESP,0x8                         ; 005c0d4c
    POP EBX                             ; 005c0d4f
    RET                                 ; 005c0d50

