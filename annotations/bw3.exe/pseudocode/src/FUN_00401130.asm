; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401130(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_004011a0 at 004011f6
;   FUN_00409980 at 00409b5a
;   FUN_0047b5e0 at 0047b735
;   FUN_00480410 at 0048058e
;   FUN_00540eb0 at 00541099
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401130
        ;   Label: FUN_00401130
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401131
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401135
    MOV EDX,dword ptr [0x005fba20]      ; 00401139 | DAT_005fba20
    SHL EAX,0x2                         ; 0040113f
    CMP EDX,0x8                         ; 00401142
    JZ 0x00401175                       ; 00401145
        ;   XREF to: 00401175 (CONDITIONAL_JUMP)  ; LAB_00401175
    MOV EDX,dword ptr [0x01c6b5c0]      ; 00401147 | DAT_01c6b5c0
    MOV EBX,dword ptr [0x005fba20]      ; 0040114d | DAT_005fba20
    AND EDX,0xff                        ; 00401153
    CMP EBX,0x10                        ; 00401159
    JNZ 0x00401185                      ; 0040115c
        ;   XREF to: 00401185 (CONDITIONAL_JUMP)  ; LAB_00401185
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 0040115e | DAT_01c5faec
    ADD ECX,ECX                         ; 00401164
    ADD ECX,EAX                         ; 00401166
    MOV AX,word ptr [EDX*0x2 + 0x1c6a070] ; 00401168
    MOV word ptr [ECX],AX               ; 00401170
    POP EBX                             ; 00401173
    RET                                 ; 00401174
    MOV EDX,dword ptr [EAX + 0x1c5faec] ; 00401175 | DAT_01c5faec
        ;   Label: LAB_00401175
    MOV AL,[0x01c6b5c0]                 ; 0040117b | DAT_01c6b5c0
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00401180
    POP EBX                             ; 00401183
    RET                                 ; 00401184
    SHL ECX,0x2                         ; 00401185
        ;   Label: LAB_00401185
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 00401188 | DAT_01c5faec
    ADD ECX,EAX                         ; 0040118e
    MOV EAX,dword ptr [EDX*0x4 + 0x1c6a270] ; 00401190
    MOV dword ptr [ECX],EAX             ; 00401197
    POP EBX                             ; 00401199
    RET                                 ; 0040119a

