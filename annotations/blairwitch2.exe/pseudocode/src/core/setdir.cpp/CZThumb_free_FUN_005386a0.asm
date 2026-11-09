; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_free_FUN_005386a0(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00539be0 at 00539c00
;   core_setdir.cpp_CZThumb_dtor_FUN_00538450 at 00538456
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 00538481
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005386a0
        ;   Label: core_setdir.cpp_CZThumb_free_FUN_005386a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005386a1
    MOV EDX,dword ptr [EBX + 0x24]      ; 005386a5
    TEST EDX,EDX                        ; 005386a8
    JNZ 0x005386ba                      ; 005386aa
        ;   XREF to: 005386ba (CONDITIONAL_JUMP)  ; LAB_005386ba
    MOV dword ptr [EBX + 0x4],0x0       ; 005386ac
    MOV EAX,dword ptr [EBX + 0x4]       ; 005386b3
    MOV dword ptr [EBX],EAX             ; 005386b6
    POP EBX                             ; 005386b8
    RET                                 ; 005386b9
    PUSH EDX                            ; 005386ba
        ;   Label: LAB_005386ba
    CALL crt_unknown.c_FUN_005b86a0     ; 005386bb
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005386c0
    MOV dword ptr [EBX + 0x24],0x0      ; 005386c3
    MOV dword ptr [EBX + 0x4],0x0       ; 005386ca
    MOV EAX,dword ptr [EBX + 0x4]       ; 005386d1
    MOV dword ptr [EBX],EAX             ; 005386d4
    POP EBX                             ; 005386d6
    RET                                 ; 005386d7

