; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042c9d0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c9d0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042c9d0
    MOV dword ptr [EAX + 0x25b0],0x1    ; 0042c9d4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042c9de
    MOV dword ptr [EAX + 0x25a4],0xbf800000 ; 0042c9e2
    PUSH 0xbf800000                     ; 0042c9ec
    MOV dword ptr [EAX + 0x25a0],EDX    ; 0042c9f1
    PUSH EAX                            ; 0042c9f7
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042c9f8
    MOV dword ptr [EAX + 0x25a8],0x7149f2ca ; 0042c9fe
    CALL dword ptr [EDX + 0x14c]        ; 0042ca08
    ADD ESP,0x8                         ; 0042ca0e
    RET                                 ; 0042ca11

