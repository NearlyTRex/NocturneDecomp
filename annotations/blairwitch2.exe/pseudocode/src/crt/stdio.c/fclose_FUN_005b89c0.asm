; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_fclose_FUN_005b89c0(int param_1)
;
;
; XREF[65]:
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042e0aa
;   cockpit_ckptutil.c_FUN_0042e130 at 0042e27f
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f3c4
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 005171ae
;   cockpit_pkbitmap.cpp_FUN_00516de0 at 00516e0c
;   cockpit_pkbitmap.cpp_FUN_00517400 at 00517461
;   cockpit_pkbmpset.cpp_FUN_005177e0 at 005179d3
;   cockpit_pkbmpset.cpp_FUN_00517a60 at 00517b44
;   core_cloth.cpp_CCloth_load_FUN_005adeb0 at 005ae33a
;   core_course.cpp_CCourse_load_FUN_00438af0 at 00438be1
;   ... and 55 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2b8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2bc = 005bce04
;   undefined4 DAT_02680160
;
; Called Functions:
;   crt_unknown.c_FUN_005b8a04
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b89c0
        ;   Label: crt_stdio.c_fclose_FUN_005b89c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b89c1
    CALL dword ptr [0x0061f2b8]         ; 005b89c5 | PTR_crt_unknown.c_FUN_005bce04_0061f2b8
    MOV EAX,[0x02680160]                ; 005b89cb | DAT_02680160
    TEST EAX,EAX                        ; 005b89d0
    JNZ 0x005b89e1                      ; 005b89d2
        ;   XREF to: 005b89e1 (CONDITIONAL_JUMP)  ; LAB_005b89e1
    CALL dword ptr [0x0061f2bc]         ; 005b89d4 | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
        ;   Label: LAB_005b89d4
    MOV EAX,0xffffffff                  ; 005b89da
    POP EBX                             ; 005b89df
    RET                                 ; 005b89e0
    CMP EBX,dword ptr [EAX + 0x4]       ; 005b89e1
        ;   Label: LAB_005b89e1
    JZ 0x005b89ee                       ; 005b89e4
        ;   XREF to: 005b89ee (CONDITIONAL_JUMP)  ; LAB_005b89ee
    MOV EAX,dword ptr [EAX]             ; 005b89e6
    TEST EAX,EAX                        ; 005b89e8
    JZ 0x005b89d4                       ; 005b89ea
        ;   XREF to: 005b89d4 (CONDITIONAL_JUMP)  ; LAB_005b89d4
    JMP 0x005b89e1                      ; 005b89ec
        ;   XREF to: 005b89e1 (UNCONDITIONAL_JUMP)  ; LAB_005b89e1
    CALL dword ptr [0x0061f2bc]         ; 005b89ee | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
        ;   Label: LAB_005b89ee
    PUSH 0x1                            ; 005b89f4
    PUSH EBX                            ; 005b89f6
    CALL crt_unknown.c_FUN_005b8a04     ; 005b89f7
        ;   XREF to: 005b8a04 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8a04()
    ADD ESP,0x8                         ; 005b89fc
    POP EBX                             ; 005b89ff
    RET                                 ; 005b8a00

