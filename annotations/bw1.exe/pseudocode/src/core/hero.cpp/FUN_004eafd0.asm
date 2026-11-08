; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eafd0(int param_1)
;
;
; XREF[1]:
;   FUN_004ea830 at 004ea942
;
; Referenced Globals:
;   undefined4 DAT_005e4800
;   TerminatedCString s_core_hero_cpp_005e4805
;   TerminatedCString s_Out_of_memory_005e4816
;   TerminatedCString s_Your_weapon_005e4825
;   undefined4 s_our_weapon_005e4825+1
;   undefined4 s_ur_weapon_005e4825+2
;   undefined4 s_r_weapon_005e4825+3
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c99770
;
; Called Functions:
;   FUN_0040c2b0
;   FUN_0040c600
;   FUN_004f7050
;   FUN_004f7690
;   FUN_004f8dc0
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eafd0
        ;   Label: FUN_004eafd0
    PUSH ESI                            ; 004eafd1
    PUSH EDI                            ; 004eafd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eafd3
    ADD EAX,0x1fae8                     ; 004eafd7
    PUSH EAX                            ; 004eafdc
    CALL FUN_004f7050                   ; 004eafdd
        ;   XREF to: 004f7050 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7050()
    ADD ESP,0x4                         ; 004eafe2
    MOV EDX,dword ptr [0x02c99770]      ; 004eafe5 | DAT_02c99770
    PUSH EDX                            ; 004eafeb
    PUSH 0x5e4800                       ; 004eafec | DAT_005e4800
    CALL FUN_0040c2b0                   ; 004eaff1
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c2b0()
    ADD ESP,0x4                         ; 004eaff6
    PUSH EAX                            ; 004eaff9
    CALL FUN_0040c600                   ; 004eaffa
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004eafff
    MOV EBX,EAX                         ; 004eb002
    TEST EAX,EAX                        ; 004eb004
    JZ 0x004eb05c                       ; 004eb006
        ;   XREF to: 004eb05c (CONDITIONAL_JUMP)  ; LAB_004eb05c
    MOV ESI,0x5e4825                    ; 004eb008 | = "Your_weapon"
        ;   Label: LAB_004eb008
    MOV EDI,EBX                         ; 004eb00d
    PUSH EDI                            ; 004eb00f
    MOV AL,byte ptr [ESI]               ; 004eb010 | = "Your_weapon" | s_ur_weapon_005e4825+2
        ;   Label: LAB_004eb010
    MOV byte ptr [EDI],AL               ; 004eb012
    CMP AL,0x0                          ; 004eb014
    JZ 0x004eb028                       ; 004eb016
        ;   XREF to: 004eb028 (CONDITIONAL_JUMP)  ; LAB_004eb028
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb018 | s_our_weapon_005e4825+1 | s_r_weapon_005e4825+3
    ADD ESI,0x2                         ; 004eb01b
    MOV byte ptr [EDI + 0x1],AL         ; 004eb01e
    ADD EDI,0x2                         ; 004eb021
    CMP AL,0x0                          ; 004eb024
    JNZ 0x004eb010                      ; 004eb026
        ;   XREF to: 004eb010 (CONDITIONAL_JUMP)  ; LAB_004eb010
    POP EDI                             ; 004eb028
        ;   Label: LAB_004eb028
    PUSH 0x1                            ; 004eb029
    MOV ESI,dword ptr [ESP + 0x14]      ; 004eb02b
    PUSH EBX                            ; 004eb02f
    ADD ESI,0x1fae8                     ; 004eb030
    PUSH ESI                            ; 004eb036
    CALL FUN_004f7690                   ; 004eb037
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7690()
    ADD ESP,0xc                         ; 004eb03c
    PUSH 0x1                            ; 004eb03f
    PUSH 0x5                            ; 004eb041
    PUSH 0x0                            ; 004eb043
    PUSH ESI                            ; 004eb045
    CALL FUN_004f8dc0                   ; 004eb046
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004eb04b
    MOV dword ptr [EBX + 0x568],0x64    ; 004eb04e
    POP EDI                             ; 004eb058
    POP ESI                             ; 004eb059
    POP EBX                             ; 004eb05a
    RET                                 ; 004eb05b
    MOV ECX,0x5e4805                    ; 004eb05c | = "..\\core\\hero.cpp"
        ;   Label: LAB_004eb05c
    MOV ESI,0x1d3                       ; 004eb061
    PUSH 0x5e4816                       ; 004eb066 | = "Out of memory!"
    MOV dword ptr [0x01d1d400],ECX      ; 004eb06b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004eb071 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004eb077
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004eb07c
    JMP 0x004eb008                      ; 004eb07f
        ;   XREF to: 004eb008 (UNCONDITIONAL_JUMP)  ; LAB_004eb008

