; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_stranger_cpp_FUN_0045d1f0(int param_1)
;
;
; XREF[1]:
;   unkafter_stranger.cpp_FUN_0045c960 at 0045c97c
;
; Referenced Globals:
;   undefined4 DAT_005f5134
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d1f0
        ;   Label: unkafter_stranger.cpp_FUN_0045d1f0
    PUSH ESI                            ; 0045d1f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045d1f2
    MOV EDX,dword ptr [EBX + 0x2698]    ; 0045d1f6
    XOR ESI,ESI                         ; 0045d1fc
    TEST EDX,EDX                        ; 0045d1fe
    JNZ 0x0045d233                      ; 0045d200
        ;   XREF to: 0045d233 (CONDITIONAL_JUMP)  ; LAB_0045d233
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0045d202
        ;   Label: LAB_0045d202
    TEST ECX,ECX                        ; 0045d208
    JZ 0x0045d24b                       ; 0045d20a
        ;   XREF to: 0045d24b (CONDITIONAL_JUMP)  ; LAB_0045d24b
    CMP dword ptr [ECX + 0x43c],0x3     ; 0045d20c
    JNZ 0x0045d24b                      ; 0045d213
        ;   XREF to: 0045d24b (CONDITIONAL_JUMP)  ; LAB_0045d24b
    FLD float ptr [0x005f5134]          ; 0045d215 | DAT_005f5134
        ;   Label: LAB_0045d215
    MOV dword ptr [EBX + 0x256a4],0x3   ; 0045d21b
    MOV EAX,0x1                         ; 0045d225
    FSTP float ptr [EBX + 0x25650]      ; 0045d22a
    POP ESI                             ; 0045d230
    POP EBX                             ; 0045d231
    RET                                 ; 0045d232
    MOV EAX,EDX                         ; 0045d233
        ;   Label: LAB_0045d233
    PUSH EAX                            ; 0045d235
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0045d236
    CALL dword ptr [EDX + 0x7c]         ; 0045d23c
    ADD ESP,0x4                         ; 0045d23f
    TEST AL,0x4                         ; 0045d242
    JZ 0x0045d202                       ; 0045d244
        ;   XREF to: 0045d202 (CONDITIONAL_JUMP)  ; LAB_0045d202
    XOR EAX,EAX                         ; 0045d246
    POP ESI                             ; 0045d248
    POP EBX                             ; 0045d249
    RET                                 ; 0045d24a
    TEST ESI,ESI                        ; 0045d24b
        ;   Label: LAB_0045d24b
    JNZ 0x0045d215                      ; 0045d24d
        ;   XREF to: 0045d215 (CONDITIONAL_JUMP)  ; LAB_0045d215
    XOR EAX,EAX                         ; 0045d24f
    POP ESI                             ; 0045d251
    POP EBX                             ; 0045d252
    RET                                 ; 0045d253

