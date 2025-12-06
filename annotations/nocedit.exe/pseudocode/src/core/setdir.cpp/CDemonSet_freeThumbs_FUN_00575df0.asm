; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_clear_FUN_005693c0 at 00569405
;   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0 at 00575bca
;
; Referenced Globals:
;   CZThumb[1500] g_CZThumbPool
;   undefined4 DAT_03347130
;   undefined4 DAT_033471f8
;
; Called Functions:
;   core_setdir.cpp_CZThumb_free_FUN_00574b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575df0
        ;   Label: core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
    PUSH ESI                            ; 00575df1
    PUSH EDI                            ; 00575df2
    PUSH EBP                            ; 00575df3
    MOV EBP,0x3347108                   ; 00575df4 | CZThumb[1500] g_CZThumbPool
    XOR EDI,EDI                         ; 00575df9
    ADD EBP,0xf0                        ; 00575dfb
    IMUL EBX,EDI,0xf0                   ; 00575e01
        ;   Label: LAB_00575e01
    MOV ESI,EBP                         ; 00575e07
    ADD EBX,0x3347108                   ; 00575e09 | DAT_033471f8 | CZThumb[1500] g_CZThumbPool
    PUSH EBX                            ; 00575e0f | CZThumb[1500] g_CZThumbPool
        ;   Label: LAB_00575e0f
    CALL core_setdir.cpp_CZThumb_free_FUN_00574b50 ; 00575e10 | void core_setdir.cpp_CZThumb_free_FUN_00574b50(CZThumb * this_ptr)
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)
    ADD EBX,0x28                        ; 00575e15 | DAT_03347130
    ADD ESP,0x4                         ; 00575e18
    CMP EBX,ESI                         ; 00575e1b
    JNZ 0x00575e0f                      ; 00575e1d | LAB_00575e0f
        ;   XREF to: 00575e0f (CONDITIONAL_JUMP)
    INC EDI                             ; 00575e1f
    ADD EBP,0xf0                        ; 00575e20
    CMP EDI,0xfa                        ; 00575e26
    JL 0x00575e01                       ; 00575e2c | LAB_00575e01
        ;   XREF to: 00575e01 (CONDITIONAL_JUMP)
    POP EBP                             ; 00575e2e
    POP EDI                             ; 00575e2f
    POP ESI                             ; 00575e30
    POP EBX                             ; 00575e31
    RET                                 ; 00575e32

