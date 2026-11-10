; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_FUN_004610d0(char *input_path,char *drive,char *output_path)
;
; Parameters:
; char *           Stack[0x4]:4   input_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   output_path
;
; XREF[1]:
;   unkafter_dosio.cpp_FUN_00461260 at 004612ea
;
; Called Functions:
;   engine_dosio.cpp_makePath_FUN_004610a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004610d0
        ;   Label: engine_dosio.cpp_FUN_004610d0
    PUSH EDI                            ; 004610d1
    SUB ESP,0x300                       ; 004610d2
    MOV EBX,dword ptr [ESP + 0x314]     ; 004610d8
    MOV ECX,ESP                         ; 004610df
    PUSH ECX                            ; 004610e1
    LEA ECX,[ESP + 0x204]               ; 004610e2
    PUSH ECX                            ; 004610e9
    LEA ECX,[ESP + 0x108]               ; 004610ea
    PUSH ECX                            ; 004610f1
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004610f2
    PUSH EDX                            ; 004610f9
    MOV ECX,dword ptr [ESP + 0x31c]     ; 004610fa
    PUSH ECX                            ; 00461101
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 00461102
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00461107
    MOV ECX,ESP                         ; 0046110a
    PUSH ECX                            ; 0046110c
    LEA ECX,[ESP + 0x204]               ; 0046110d
    PUSH ECX                            ; 00461114
    LEA ECX,[ESP + 0x108]               ; 00461115
    PUSH ECX                            ; 0046111c
    PUSH 0x0                            ; 0046111d
    PUSH EBX                            ; 0046111f
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 00461120
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00461125
    TEST EBX,EBX                        ; 00461128
    JZ 0x00461131                       ; 0046112a
        ;   XREF to: 00461131 (CONDITIONAL_JUMP)  ; LAB_00461131
    CMP byte ptr [EBX],0x0              ; 0046112c
    JNZ 0x0046113a                      ; 0046112f
        ;   XREF to: 0046113a (CONDITIONAL_JUMP)  ; LAB_0046113a
    ADD ESP,0x300                       ; 00461131
        ;   Label: LAB_00461131
    POP EDI                             ; 00461137
    POP EBX                             ; 00461138
    RET                                 ; 00461139
    MOV EDI,EBX                         ; 0046113a
        ;   Label: LAB_0046113a
    SUB ECX,ECX                         ; 0046113c
    DEC ECX                             ; 0046113e
    XOR EAX,EAX                         ; 0046113f
    SCASB.REPNE ES:EDI                  ; 00461141
    NOT ECX                             ; 00461143
    DEC ECX                             ; 00461145
    ADD ECX,EBX                         ; 00461146
    MOV DL,byte ptr [ECX + -0x1]        ; 00461148
    CMP DL,0x5c                         ; 0046114b
    JZ 0x00461131                       ; 0046114e
        ;   XREF to: 00461131 (CONDITIONAL_JUMP)  ; LAB_00461131
    CMP DL,0x2f                         ; 00461150
    JZ 0x00461131                       ; 00461153
        ;   XREF to: 00461131 (CONDITIONAL_JUMP)  ; LAB_00461131
    PUSH ESI                            ; 00461155
    MOV ESI,0x5d0cd2                    ; 00461156
    MOV EDI,EBX                         ; 0046115b
    PUSH EDI                            ; 0046115d
    SUB ECX,ECX                         ; 0046115e
    DEC ECX                             ; 00461160
    MOV AL,0x0                          ; 00461161
    SCASB.REPNE ES:EDI                  ; 00461163
    DEC EDI                             ; 00461165
    MOV AL,byte ptr [ESI]               ; 00461166
        ;   Label: LAB_00461166
    MOV byte ptr [EDI],AL               ; 00461168
    CMP AL,0x0                          ; 0046116a
    JZ 0x0046117e                       ; 0046116c
        ;   XREF to: 0046117e (CONDITIONAL_JUMP)  ; LAB_0046117e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046116e
    ADD ESI,0x2                         ; 00461171
    MOV byte ptr [EDI + 0x1],AL         ; 00461174
    ADD EDI,0x2                         ; 00461177
    CMP AL,0x0                          ; 0046117a
    JNZ 0x00461166                      ; 0046117c
        ;   XREF to: 00461166 (CONDITIONAL_JUMP)  ; LAB_00461166
    POP EDI                             ; 0046117e
        ;   Label: LAB_0046117e
    POP ESI                             ; 0046117f
    ADD ESP,0x300                       ; 00461180
    POP EDI                             ; 00461186
    POP EBX                             ; 00461187
    RET                                 ; 00461188

