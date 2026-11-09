; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 unkafter_2d_cpp_FUN_005c5138(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;   undefined4 DAT_0061f6cc
;   undefined4 DAT_0061f6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5138
        ;   Label: unkafter_2d.cpp_FUN_005c5138
    PUSH ESI                            ; 005c5139
    PUSH EDI                            ; 005c513a
    PUSH ES                             ; 005c513b
    MOV EBX,0x8                         ; 005c513c
    CALL dword ptr [0x0061f2a4]         ; 005c5141 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: LAB_005c5141
    LEA ESI,[EAX + EBX*0x1]             ; 005c5147
    MOV AX,DS                           ; 005c514a
    MOV ES,AX                           ; 005c514c
    LEA EDI,[ESI + 0x58]                ; 005c514e
    LEA ESI,[EBX + 0x61f764]            ; 005c5151
    ADD EBX,0x8                         ; 005c5157
    MOVSD ES:EDI,ESI                    ; 005c515a
    MOVSD ES:EDI,ESI                    ; 005c515b
    CMP EBX,0x68                        ; 005c515c
    JNZ 0x005c5141                      ; 005c515f
        ;   XREF to: 005c5141 (CONDITIONAL_JUMP)  ; LAB_005c5141
    MOV EDX,0x5c4e8c                    ; 005c5161
    MOV EBX,0x5c50b8                    ; 005c5166
    MOV dword ptr [0x0061f6cc],EDX      ; 005c516b | DAT_0061f6cc
    MOV dword ptr [0x0061f6d0],EBX      ; 005c5171 | DAT_0061f6d0
    POP ES                              ; 005c5177
    POP EDI                             ; 005c5178
    POP ESI                             ; 005c5179
    POP EBX                             ; 005c517a
    RET                                 ; 005c517b

