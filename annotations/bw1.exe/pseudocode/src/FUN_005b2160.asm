; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b2160(int param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005d041c = 001d0850
;
; Called Functions:
;   FUN_005b1e90
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2160
        ;   Label: FUN_005b2160
    PUSH ESI                            ; 005b2161
    SUB ESP,0x8                         ; 005b2162
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b2165
    MOV ESI,dword ptr [ESP + 0x18]      ; 005b2169
    PUSH -0x1                           ; 005b216d
    PUSH -0x1                           ; 005b216f
    PUSH EBX                            ; 005b2171
    CALL FUN_005b1e90                   ; 005b2172
        ;   XREF to: 005b1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1e90()
    ADD ESP,0xc                         ; 005b2177
    TEST EAX,EAX                        ; 005b217a
    JNZ 0x005b2184                      ; 005b217c
        ;   XREF to: 005b2184 (CONDITIONAL_JUMP)  ; LAB_005b2184
    ADD ESP,0x8                         ; 005b217e
    POP ESI                             ; 005b2181
    POP EBX                             ; 005b2182
    RET                                 ; 005b2183
    PUSH EDI                            ; 005b2184
        ;   Label: LAB_005b2184
    MOV EDI,ESI                         ; 005b2185
    SUB ECX,ECX                         ; 005b2187
    DEC ECX                             ; 005b2189
    XOR EAX,EAX                         ; 005b218a
    SCASB.REPNE ES:EDI                  ; 005b218c
    NOT ECX                             ; 005b218e
    DEC ECX                             ; 005b2190
    LEA EAX,[ESP + 0x4]                 ; 005b2191
    PUSH EAX                            ; 005b2195
    PUSH ECX                            ; 005b2196
    PUSH ESI                            ; 005b2197
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 005b2198
    PUSH EDX                            ; 005b219e
    CALL dword ptr CS:[0x5d041c]        ; 005b219f | PTR_GetTextExtentPoint32A_005d041c
    TEST EAX,EAX                        ; 005b21a6
    JNZ 0x005b21ae                      ; 005b21a8
        ;   XREF to: 005b21ae (CONDITIONAL_JUMP)  ; LAB_005b21ae
    MOV dword ptr [ESP + 0x8],EAX       ; 005b21aa
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b21ae
        ;   Label: LAB_005b21ae
    MOV ESI,dword ptr [EBX + 0x6b78]    ; 005b21b2
    MOV EDI,dword ptr [EBX + 0x6b7c]    ; 005b21b8
    ADD EAX,ESI                         ; 005b21be
    ADD EAX,EDI                         ; 005b21c0
    POP EDI                             ; 005b21c2
    ADD ESP,0x8                         ; 005b21c3
    POP ESI                             ; 005b21c6
    POP EBX                             ; 005b21c7
    RET                                 ; 005b21c8

