; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_morph_cpp_FUN_004fb210(undefined4 *param_1)
;
;
; XREF[3]:
;   core_morph.cpp_FUN_004fb1f0 at 004fb1f6
;   core_motion.cpp_CMotionList_load_FUN_004fb280 at 004fb290
;   core_skeleton.cpp_CSkeleton_free_FUN_00547b90 at 00547c09
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb210
        ;   Label: core_morph.cpp_FUN_004fb210
    PUSH ESI                            ; 004fb211
    PUSH EDI                            ; 004fb212
    PUSH EBP                            ; 004fb213
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fb214
    MOV EDX,dword ptr [EDI + 0x1c24]    ; 004fb218
    XOR ESI,ESI                         ; 004fb21e
    TEST EDX,EDX                        ; 004fb220
    JLE 0x004fb24a                      ; 004fb222
        ;   XREF to: 004fb24a (CONDITIONAL_JUMP)  ; LAB_004fb24a
    MOV EBX,EDI                         ; 004fb224
    MOV EBP,dword ptr [EBX + 0x1c9c]    ; 004fb226
        ;   Label: LAB_004fb226
    TEST EBP,EBP                        ; 004fb22c
    JZ 0x004fb239                       ; 004fb22e
        ;   XREF to: 004fb239 (CONDITIONAL_JUMP)  ; LAB_004fb239
    PUSH EBP                            ; 004fb230
    CALL crt_unknown.c_FUN_005a3770     ; 004fb231
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004fb236
    INC ESI                             ; 004fb239
        ;   Label: LAB_004fb239
    MOV ECX,dword ptr [EDI + 0x1c24]    ; 004fb23a
    ADD EBX,0x120                       ; 004fb240
    CMP ESI,ECX                         ; 004fb246
    JL 0x004fb226                       ; 004fb248
        ;   XREF to: 004fb226 (CONDITIONAL_JUMP)  ; LAB_004fb226
    PUSH 0x1c200                        ; 004fb24a
        ;   Label: LAB_004fb24a
    PUSH 0x0                            ; 004fb24f
    MOV dword ptr [EDI],0x0             ; 004fb251
    ADD EDI,0x1c28                      ; 004fb257
    PUSH EDI                            ; 004fb25d
    MOV dword ptr [EDI + -0x4],0x0      ; 004fb25e
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004fb265
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004fb26a
    POP EBP                             ; 004fb26d
    POP EDI                             ; 004fb26e
    POP ESI                             ; 004fb26f
    POP EBX                             ; 004fb270
    RET                                 ; 004fb271

