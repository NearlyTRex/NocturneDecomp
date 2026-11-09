; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004ebe80(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_doc.cpp_FUN_00469550 at 0046af0c
;   core_doc.cpp_FUN_004737b0 at 004737f2
;   core_stranger.cpp_FUN_00585b00 at 0058724d
;   core_stranger.cpp_FUN_0058fcb0 at 0058fcf2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebe80
        ;   Label: core_hero.cpp_FUN_004ebe80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ebe81
    MOV EDX,dword ptr [EBX + 0x1ff88]   ; 004ebe85
    TEST EDX,EDX                        ; 004ebe8b
    JNZ 0x004ebe91                      ; 004ebe8d
        ;   XREF to: 004ebe91 (CONDITIONAL_JUMP)  ; LAB_004ebe91
    POP EBX                             ; 004ebe8f
    RET                                 ; 004ebe90
    PUSH EBX                            ; 004ebe91
        ;   Label: LAB_004ebe91
    MOV EAX,EDX                         ; 004ebe92
    PUSH EAX                            ; 004ebe94
    MOV EDX,dword ptr [EDX + 0x154]     ; 004ebe95
    CALL dword ptr [EDX + 0xa4]         ; 004ebe9b
    ADD ESP,0x8                         ; 004ebea1
    MOV dword ptr [EBX + 0x1ff88],0x0   ; 004ebea4
    POP EBX                             ; 004ebeae
    RET                                 ; 004ebeaf

