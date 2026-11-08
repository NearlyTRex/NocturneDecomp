; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005487e0(int param_1)
;
;
; XREF[6]:
;   FUN_0043cb00 at 0043ce32
;   FUN_0054b5b0 at 0054b604
;   FUN_0054bb60 at 0054bb6c
;   FUN_0054bd10 at 0054bd20
;   FUN_0054eac0 at 0054eace
;   FUN_0054fa00 at 0054fa1a
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1aaa
;   TerminatedCString s_Tried_to_do_something_wi_005d1abf
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005487e0
        ;   Label: FUN_005487e0
    CMP dword ptr [EAX + 0x35ac],0x0    ; 005487e4
    JZ 0x005487f8                       ; 005487eb
        ;   XREF to: 005487f8 (CONDITIONAL_JUMP)  ; LAB_005487f8
    MOV EAX,dword ptr [ESP + 0x4]       ; 005487ed
    MOV EAX,dword ptr [EAX + 0x35ac]    ; 005487f1
    RET                                 ; 005487f7
    PUSH EBX                            ; 005487f8
        ;   Label: LAB_005487f8
    MOV ECX,0x5d1aaa                    ; 005487f9 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x2f6                       ; 005487fe
    PUSH 0x5d1abf                       ; 00548803 | = "Tried to do something with the skelet..."
    MOV dword ptr [0x01d71de0],ECX      ; 00548808 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0054880e | DAT_01d71de4
    CALL FUN_004e4330                   ; 00548814
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00548819
    POP EBX                             ; 0054881c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054881d
    MOV EAX,dword ptr [EAX + 0x35ac]    ; 00548821
    RET                                 ; 00548827

