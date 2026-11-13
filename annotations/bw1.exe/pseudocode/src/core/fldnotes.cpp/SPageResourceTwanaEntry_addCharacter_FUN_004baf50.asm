; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004baf50(SPageResourceTwanaEntry *this_ptr,char *character)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   character
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004bac50 at 004bac73
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baf50
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004baf50
    PUSH ESI                            ; 004baf51
    PUSH EDI                            ; 004baf52
    PUSH EBP                            ; 004baf53
    SUB ESP,0x104                       ; 004baf54
    MOV EBP,dword ptr [ESP + 0x118]     ; 004baf5a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004baf61
    MOV EBX,EBP                         ; 004baf68
    MOV AH,byte ptr [EBP + 0x18]        ; 004baf6a
    XOR EDX,EDX                         ; 004baf6d
    TEST AH,AH                          ; 004baf6f
    JZ 0x004baf82                       ; 004baf71
        ;   XREF to: 004baf82 (CONDITIONAL_JUMP)  ; LAB_004baf82
    INC EDX                             ; 004baf73
        ;   Label: LAB_004baf73
    ADD EBX,0x20                        ; 004baf74
    CMP EDX,0x3                         ; 004baf77
    JGE 0x004baf82                      ; 004baf7a
        ;   XREF to: 004baf82 (CONDITIONAL_JUMP)  ; LAB_004baf82
    CMP byte ptr [EBX + 0x18],0x0       ; 004baf7c
    JNZ 0x004baf73                      ; 004baf80
        ;   XREF to: 004baf73 (CONDITIONAL_JUMP)  ; LAB_004baf73
    CMP EDX,0x3                         ; 004baf82
        ;   Label: LAB_004baf82
    JGE 0x004bb04f                      ; 004baf85
        ;   XREF to: 004bb04f (CONDITIONAL_JUMP)  ; LAB_004bb04f
    SHL EDX,0x5                         ; 004baf8b
        ;   Label: LAB_004baf8b
    LEA EBX,[EBP + 0x18]                ; 004baf8e
    LEA EDI,[EBX + EDX*0x1]             ; 004baf91
    MOV ECX,0x40                        ; 004baf94
    PUSH EDI                            ; 004baf99
    MOV AL,byte ptr [ESI]               ; 004baf9a
        ;   Label: LAB_004baf9a
    MOV byte ptr [EDI],AL               ; 004baf9c
    CMP AL,0x0                          ; 004baf9e
    JZ 0x004bafb2                       ; 004bafa0
        ;   XREF to: 004bafb2 (CONDITIONAL_JUMP)  ; LAB_004bafb2
    MOV AL,byte ptr [ESI + 0x1]         ; 004bafa2
    ADD ESI,0x2                         ; 004bafa5
    MOV byte ptr [EDI + 0x1],AL         ; 004bafa8
    ADD EDI,0x2                         ; 004bafab
    CMP AL,0x0                          ; 004bafae
    JNZ 0x004baf9a                      ; 004bafb0
        ;   XREF to: 004baf9a (CONDITIONAL_JUMP)  ; LAB_004baf9a
    POP EDI                             ; 004bafb2
        ;   Label: LAB_004bafb2
    MOV EDI,ESP                         ; 004bafb3
    MOV ESI,0x61d318                    ; 004bafb5
    MOV dword ptr [ESP + 0x100],EBX     ; 004bafba
    XOR EDX,EDX                         ; 004bafc1
    MOV EBX,EBP                         ; 004bafc3
    MOVSD.REP ES:EDI,ESI                ; 004bafc5
    MOV EBP,EDX                         ; 004bafc7
        ;   Label: LAB_004bafc7
    MOV CH,byte ptr [EBX + 0x18]        ; 004bafc9
    SHL EBP,0x5                         ; 004bafcc
    TEST CH,CH                          ; 004bafcf
    JZ 0x004bb029                       ; 004bafd1
        ;   XREF to: 004bb029 (CONDITIONAL_JUMP)  ; LAB_004bb029
    MOV ESI,0x5df910                    ; 004bafd3
    MOV EDI,ESP                         ; 004bafd8
    PUSH EDI                            ; 004bafda
    SUB ECX,ECX                         ; 004bafdb
    DEC ECX                             ; 004bafdd
    MOV AL,0x0                          ; 004bafde
    SCASB.REPNE ES:EDI                  ; 004bafe0
    DEC EDI                             ; 004bafe2
    MOV AL,byte ptr [ESI]               ; 004bafe3
        ;   Label: LAB_004bafe3
    MOV byte ptr [EDI],AL               ; 004bafe5
    CMP AL,0x0                          ; 004bafe7
    JZ 0x004baffb                       ; 004bafe9
        ;   XREF to: 004baffb (CONDITIONAL_JUMP)  ; LAB_004baffb
    MOV AL,byte ptr [ESI + 0x1]         ; 004bafeb
    ADD ESI,0x2                         ; 004bafee
    MOV byte ptr [EDI + 0x1],AL         ; 004baff1
    ADD EDI,0x2                         ; 004baff4
    CMP AL,0x0                          ; 004baff7
    JNZ 0x004bafe3                      ; 004baff9
        ;   XREF to: 004bafe3 (CONDITIONAL_JUMP)  ; LAB_004bafe3
    POP EDI                             ; 004baffb
        ;   Label: LAB_004baffb
    MOV ESI,dword ptr [ESP + 0x100]     ; 004baffc
    MOV EDI,ESP                         ; 004bb003
    ADD ESI,EBP                         ; 004bb005
    PUSH EDI                            ; 004bb007
    SUB ECX,ECX                         ; 004bb008
    DEC ECX                             ; 004bb00a
    MOV AL,0x0                          ; 004bb00b
    SCASB.REPNE ES:EDI                  ; 004bb00d
    DEC EDI                             ; 004bb00f
    MOV AL,byte ptr [ESI]               ; 004bb010
        ;   Label: LAB_004bb010
    MOV byte ptr [EDI],AL               ; 004bb012
    CMP AL,0x0                          ; 004bb014
    JZ 0x004bb028                       ; 004bb016
        ;   XREF to: 004bb028 (CONDITIONAL_JUMP)  ; LAB_004bb028
    MOV AL,byte ptr [ESI + 0x1]         ; 004bb018
    ADD ESI,0x2                         ; 004bb01b
    MOV byte ptr [EDI + 0x1],AL         ; 004bb01e
    ADD EDI,0x2                         ; 004bb021
    CMP AL,0x0                          ; 004bb024
    JNZ 0x004bb010                      ; 004bb026
        ;   XREF to: 004bb010 (CONDITIONAL_JUMP)  ; LAB_004bb010
    POP EDI                             ; 004bb028
        ;   Label: LAB_004bb028
    INC EDX                             ; 004bb029
        ;   Label: LAB_004bb029
    ADD EBX,0x20                        ; 004bb02a
    CMP EDX,0x3                         ; 004bb02d
    JL 0x004bafc7                       ; 004bb030
        ;   XREF to: 004bafc7 (CONDITIONAL_JUMP)  ; LAB_004bafc7
    MOV EDX,ESP                         ; 004bb032
    PUSH EDX                            ; 004bb034
    MOV EDX,dword ptr [0x0061b4d0]      ; 004bb035 | DAT_0061b4d0
    PUSH EDX                            ; 004bb03b
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004bb03c
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004bb041
    ADD ESP,0x104                       ; 004bb044
    POP EBP                             ; 004bb04a
    POP EDI                             ; 004bb04b
    POP ESI                             ; 004bb04c
    POP EBX                             ; 004bb04d
    RET                                 ; 004bb04e
    PUSH 0x60                           ; 004bb04f
        ;   Label: LAB_004bb04f
    PUSH 0x0                            ; 004bb051
    LEA EDX,[EBP + 0x18]                ; 004bb053
    PUSH EDX                            ; 004bb056
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004bb057
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004bb05c
    XOR EDX,EDX                         ; 004bb05f
    JMP 0x004baf8b                      ; 004bb061
        ;   XREF to: 004baf8b (UNCONDITIONAL_JUMP)  ; LAB_004baf8b

