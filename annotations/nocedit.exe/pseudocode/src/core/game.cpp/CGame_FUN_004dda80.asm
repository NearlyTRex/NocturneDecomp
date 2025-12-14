; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_FUN_004dda80(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004e00c6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dda80
        ;   Label: core_game.cpp_CGame_FUN_004dda80
    PUSH ESI                            ; 004dda81
    PUSH EDI                            ; 004dda82
    PUSH EBP                            ; 004dda83
    MOV EDI,dword ptr [ESP + 0x18]      ; 004dda84
    MOV EBP,dword ptr [ESP + 0x20]      ; 004dda88
    MOV EDX,dword ptr [ESP + 0x14]      ; 004dda8c
    LEA EBX,[EBP*0x4 + 0x0]             ; 004dda90
    ADD EBX,EDX                         ; 004dda97
    FLD float ptr [EBX + 0x514]         ; 004dda99
    FMUL float ptr [ESP + 0x1c]         ; 004dda9f
    FSTP float ptr [EBX + 0x514]        ; 004ddaa3
    MOV ECX,dword ptr [EDI + 0x28558]   ; 004ddaa9
    XOR EBX,EBX                         ; 004ddaaf
    TEST ECX,ECX                        ; 004ddab1
    JLE 0x004ddacd                      ; 004ddab3
        ;   XREF to: 004ddacd (CONDITIONAL_JUMP)  ; LAB_004ddacd
    MOV ESI,EDI                         ; 004ddab5
    CMP EBP,dword ptr [ESI + 0x2857c]   ; 004ddab7
        ;   Label: LAB_004ddab7
    JZ 0x004ddad2                       ; 004ddabd
        ;   XREF to: 004ddad2 (CONDITIONAL_JUMP)  ; LAB_004ddad2
    INC EBX                             ; 004ddabf
        ;   Label: LAB_004ddabf
    MOV EAX,dword ptr [EDI + 0x28558]   ; 004ddac0
    ADD ESI,0x24                        ; 004ddac6
    CMP EBX,EAX                         ; 004ddac9
    JL 0x004ddab7                       ; 004ddacb
        ;   XREF to: 004ddab7 (CONDITIONAL_JUMP)  ; LAB_004ddab7
    POP EBP                             ; 004ddacd
        ;   Label: LAB_004ddacd
    POP EDI                             ; 004ddace
    POP ESI                             ; 004ddacf
    POP EBX                             ; 004ddad0
    RET                                 ; 004ddad1
    PUSH EBX                            ; 004ddad2
        ;   Label: LAB_004ddad2
    PUSH dword ptr [ESP + 0x20]         ; 004ddad3
    PUSH EDI                            ; 004ddad7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ddad8
    PUSH ECX                            ; 004ddadc
    CALL core_game.cpp_CGame_FUN_004dda80 ; 004ddadd
        ;   XREF to: 004dda80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004dda80(CGame * this_ptr)
    ADD ESP,0x10                        ; 004ddae2
    JMP 0x004ddabf                      ; 004ddae5
        ;   XREF to: 004ddabf (UNCONDITIONAL_JUMP)  ; LAB_004ddabf

