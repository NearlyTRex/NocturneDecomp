; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004cfad0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_doc.cpp_FUN_00450c60 at 0045237d
;   core_stranger.cpp_FUN_00563060 at 005647b6
;   core_stranger.cpp_FUN_0056d060 at 0056d0a2
;   unkafter_stranger.cpp_FUN_0045b190 at 0045b1d2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfad0
        ;   Label: core_hero.cpp_FUN_004cfad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cfad1
    MOV EDX,dword ptr [EBX + 0x25618]   ; 004cfad5
    TEST EDX,EDX                        ; 004cfadb
    JNZ 0x004cfae1                      ; 004cfadd
        ;   XREF to: 004cfae1 (CONDITIONAL_JUMP)  ; LAB_004cfae1
    POP EBX                             ; 004cfadf
    RET                                 ; 004cfae0
    PUSH EBX                            ; 004cfae1
        ;   Label: LAB_004cfae1
    MOV EAX,EDX                         ; 004cfae2
    PUSH EAX                            ; 004cfae4
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004cfae5
    CALL dword ptr [EDX + 0xac]         ; 004cfaeb
    ADD ESP,0x8                         ; 004cfaf1
    MOV dword ptr [EBX + 0x25618],0x0   ; 004cfaf4
    POP EBX                             ; 004cfafe
    RET                                 ; 004cfaff

