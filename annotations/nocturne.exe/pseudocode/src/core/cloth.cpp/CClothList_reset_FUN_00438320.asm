; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_reset_FUN_00438320(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CClothList_dtor_FUN_00438250 at 00438256
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100 at 0053d4ea
;
; Called Functions:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160
;   crt_memory.c_memset_FUN_00563cc0
;   crt_memory.c_operator_delete_FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438320
        ;   Label: core_cloth.cpp_CClothList_reset_FUN_00438320
    PUSH ESI                            ; 00438321
    PUSH EDI                            ; 00438322
    MOV EDI,dword ptr [ESP + 0x10]      ; 00438323
    MOV EDX,dword ptr [EDI]             ; 00438327
    XOR EBX,EBX                         ; 00438329
    TEST EDX,EDX                        ; 0043832b
    JLE 0x00438359                      ; 0043832d
        ;   XREF to: 00438359 (CONDITIONAL_JUMP)  ; LAB_00438359
    MOV ESI,EDI                         ; 0043832f
    MOV EAX,dword ptr [ESI + 0x194]     ; 00438331
        ;   Label: LAB_00438331
    TEST EAX,EAX                        ; 00438337
    JZ 0x0043834f                       ; 00438339
        ;   XREF to: 0043834f (CONDITIONAL_JUMP)  ; LAB_0043834f
    PUSH 0x0                            ; 0043833b
    PUSH EAX                            ; 0043833d
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 0043833e
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00438343
    PUSH EAX                            ; 00438346
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00438347
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0043834c
    INC EBX                             ; 0043834f
        ;   Label: LAB_0043834f
    MOV ECX,dword ptr [EDI]             ; 00438350
    ADD ESI,0x4                         ; 00438352
    CMP EBX,ECX                         ; 00438355
    JL 0x00438331                       ; 00438357
        ;   XREF to: 00438331 (CONDITIONAL_JUMP)  ; LAB_00438331
    PUSH 0x190                          ; 00438359
        ;   Label: LAB_00438359
    PUSH 0x0                            ; 0043835e
    LEA EAX,[EDI + 0x4]                 ; 00438360
    PUSH EAX                            ; 00438363
    MOV dword ptr [EDI],0x0             ; 00438364
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0043836a
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043836f
    PUSH 0x28                           ; 00438372
    PUSH 0x0                            ; 00438374
    ADD EDI,0x194                       ; 00438376
    PUSH EDI                            ; 0043837c
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0043837d
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00438382
    POP EDI                             ; 00438385
    POP ESI                             ; 00438386
    POP EBX                             ; 00438387
    RET                                 ; 00438388

