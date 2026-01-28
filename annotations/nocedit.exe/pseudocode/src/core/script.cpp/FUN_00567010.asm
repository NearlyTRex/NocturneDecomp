; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_FUN_00567010(void)
;
; Local Variables:
; undefined1       Stack[-0x200]:1  local_200
; undefined1       Stack[-0x1ff]:1  local_1ff
;
; XREF[2]:
;   core_msnedit.cpp_FUN_0053ea30 at 0053eb24
;   core_script.cpp_FUN_00564090 at 005641b3
;
; Called Functions:
;   core_script.cpp_FUN_00567080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567010
        ;   Label: core_script.cpp_FUN_00567010
    PUSH ESI                            ; 00567011
    PUSH EDI                            ; 00567012
    SUB ESP,0x1f4                       ; 00567013
    MOV EBX,dword ptr [ESP + 0x208]     ; 00567019
    MOV ESI,dword ptr [ESP + 0x204]     ; 00567020
    MOV AH,byte ptr [EBX]               ; 00567027
    MOV EDI,dword ptr [ESP + 0x20c]     ; 00567029
    TEST AH,AH                          ; 00567030
    JZ 0x0056706d                       ; 00567032
        ;   XREF to: 0056706d (CONDITIONAL_JUMP)  ; LAB_0056706d
    MOV DH,byte ptr [EBX]               ; 00567034
        ;   Label: LAB_00567034
    MOV EAX,ESP                         ; 00567036
    CMP DH,0x3b                         ; 00567038
    JZ 0x0056704f                       ; 0056703b
        ;   XREF to: 0056704f (CONDITIONAL_JUMP)  ; LAB_0056704f
    CMP byte ptr [EBX],0x0              ; 0056703d
        ;   Label: LAB_0056703d
    JZ 0x0056704f                       ; 00567040
        ;   XREF to: 0056704f (CONDITIONAL_JUMP)  ; LAB_0056704f
    MOV DL,byte ptr [EBX]               ; 00567042
    INC EBX                             ; 00567044
    MOV byte ptr [EAX],DL               ; 00567045
    MOV CL,byte ptr [EBX]               ; 00567047
    INC EAX                             ; 00567049
    CMP CL,0x3b                         ; 0056704a
    JNZ 0x0056703d                      ; 0056704d
        ;   XREF to: 0056703d (CONDITIONAL_JUMP)  ; LAB_0056703d
    PUSH EDI                            ; 0056704f
        ;   Label: LAB_0056704f
    MOV byte ptr [EAX],0x0              ; 00567050
    LEA EAX,[ESP + 0x4]                 ; 00567053
    PUSH EAX                            ; 00567057
    PUSH ESI                            ; 00567058
    CALL core_script.cpp_FUN_00567080   ; 00567059
        ;   XREF to: 00567080 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00567080()
    MOV AL,byte ptr [EBX]               ; 0056705e
    ADD ESP,0xc                         ; 00567060
    CMP AL,0x3b                         ; 00567063
    JNZ 0x00567068                      ; 00567065
        ;   XREF to: 00567068 (CONDITIONAL_JUMP)  ; LAB_00567068
    INC EBX                             ; 00567067
    CMP byte ptr [EBX],0x0              ; 00567068
        ;   Label: LAB_00567068
    JNZ 0x00567034                      ; 0056706b
        ;   XREF to: 00567034 (CONDITIONAL_JUMP)  ; LAB_00567034
    ADD ESP,0x1f4                       ; 0056706d
        ;   Label: LAB_0056706d
    POP EDI                             ; 00567073
    POP ESI                             ; 00567074
    POP EBX                             ; 00567075
    RET                                 ; 00567076

