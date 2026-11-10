; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_fclose_FUN_005a3a90(int param_1)
;
;
; XREF[66]:
;   cockpit_ckptutil.c_FUN_004367e0 at 004369ca
;   cockpit_ckptutil.c_FUN_00436a50 at 00436b9f
;   cockpit_ckptutil.c_rotateBitmap_FUN_00437c50 at 00437ce4
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 at 005101de
;   cockpit_pkbitmap.cpp_FUN_0050fe10 at 0050fe3c
;   cockpit_pkbmpset.cpp_FUN_0051080e at 00510a03
;   cockpit_pkbmpset.cpp_FUN_00510a90 at 00510b74
;   core_cloth.cpp_FUN_0043c330 at 0043c7ba
;   core_course.cpp_FUN_00444970 at 00444a61
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c1f8
;   ... and 56 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079b4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079b8 = 005a7f44
;   undefined4 DAT_02d252a0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3ad4
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3a90
        ;   Label: crt_stdio.c_fclose_FUN_005a3a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3a91
    CALL dword ptr [0x006079b4]         ; 005a3a95 | PTR_crt_unknown.c_FUN_005a7f44_006079b4
    MOV EAX,[0x02d252a0]                ; 005a3a9b | DAT_02d252a0
    TEST EAX,EAX                        ; 005a3aa0
    JNZ 0x005a3ab1                      ; 005a3aa2
        ;   XREF to: 005a3ab1 (CONDITIONAL_JUMP)  ; LAB_005a3ab1
    CALL dword ptr [0x006079b8]         ; 005a3aa4 | PTR_crt_unknown.c_FUN_005a7f44_006079b8
        ;   Label: LAB_005a3aa4
    MOV EAX,0xffffffff                  ; 005a3aaa
    POP EBX                             ; 005a3aaf
    RET                                 ; 005a3ab0
    CMP EBX,dword ptr [EAX + 0x4]       ; 005a3ab1
        ;   Label: LAB_005a3ab1
    JZ 0x005a3abe                       ; 005a3ab4
        ;   XREF to: 005a3abe (CONDITIONAL_JUMP)  ; LAB_005a3abe
    MOV EAX,dword ptr [EAX]             ; 005a3ab6
    TEST EAX,EAX                        ; 005a3ab8
    JZ 0x005a3aa4                       ; 005a3aba
        ;   XREF to: 005a3aa4 (CONDITIONAL_JUMP)  ; LAB_005a3aa4
    JMP 0x005a3ab1                      ; 005a3abc
        ;   XREF to: 005a3ab1 (UNCONDITIONAL_JUMP)  ; LAB_005a3ab1
    CALL dword ptr [0x006079b8]         ; 005a3abe | PTR_crt_unknown.c_FUN_005a7f44_006079b8
        ;   Label: LAB_005a3abe
    PUSH 0x1                            ; 005a3ac4
    PUSH EBX                            ; 005a3ac6
    CALL crt_unknown.c_FUN_005a3ad4     ; 005a3ac7
        ;   XREF to: 005a3ad4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3ad4()
    ADD ESP,0x8                         ; 005a3acc
    POP EBX                             ; 005a3acf
    RET                                 ; 005a3ad0

