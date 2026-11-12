; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005c2200(longlong *param_1,char *param_2,int param_3)
;
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
; undefined        Stack[-0x53]:1  local_53
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   crt_unknown.c_FUN_005bb938 at 005bbd68
;   crt_unknown.c_FUN_005c22a0 at 005c22fc
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_0061f664
;
; Called Functions:
;   crt_unknown.c_FUN_005b9d7b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2200
        ;   Label: crt_unknown.c_FUN_005c2200
    PUSH ESI                            ; 005c2201
    PUSH EDI                            ; 005c2202
    PUSH ES                             ; 005c2203
    PUSH EBP                            ; 005c2204
    SUB ESP,0x40                        ; 005c2205
    MOV ESI,dword ptr [ESP + 0x58]      ; 005c2208
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005c220c
    LEA EDI,[ESP + 0x34]                ; 005c2210
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c2214
    MOV AX,DS                           ; 005c2218
    LEA EBP,[ESP + 0x1]                 ; 005c221a
    MOV ES,AX                           ; 005c221e
    XOR EDX,EDX                         ; 005c2220
    MOV EAX,dword ptr [ESP + 0x60]      ; 005c2222
    MOVSD ES:EDI,ESI                    ; 005c2226
    MOVSD ES:EDI,ESI                    ; 005c2227
    MOV dword ptr [ESP + 0x2c],EAX      ; 005c2228
    XOR AH,AH                           ; 005c222c
    MOV dword ptr [ESP + 0x30],EDX      ; 005c222e
    MOV byte ptr [ESP],AH               ; 005c2232
    LEA EDI,[ESP + 0x24]                ; 005c2235
        ;   Label: LAB_005c2235
    LEA ESI,[ESP + 0x34]                ; 005c2239
    LEA EBX,[ESP + 0x2c]                ; 005c223d
    LEA EAX,[ESP + 0x34]                ; 005c2241
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c2245
    MOV EAX,dword ptr [EAX]             ; 005c2248
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c224a
    MOV EBX,dword ptr [EBX]             ; 005c224d
    CALL crt_unknown.c_FUN_005b9d7b     ; 005c224f
        ;   XREF to: 005b9d7b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9d7b()
    MOV dword ptr [ESI + 0x4],EDX       ; 005c2254
    MOV dword ptr [ESI],EAX             ; 005c2257
    MOV dword ptr [EDI + 0x4],ECX       ; 005c2259
    MOV dword ptr [EDI],EBX             ; 005c225c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c225e
    MOV AL,byte ptr [EAX + 0x61f664]    ; 005c2262 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [EBP],AL               ; 005c2268
    MOV EBX,dword ptr [ESP + 0x34]      ; 005c226b
    INC EBP                             ; 005c226f
    TEST EBX,EBX                        ; 005c2270
    JNZ 0x005c2235                      ; 005c2272
        ;   XREF to: 005c2235 (CONDITIONAL_JUMP)  ; LAB_005c2235
    CMP dword ptr [ESP + 0x38],0x0      ; 005c2274
    JNZ 0x005c2235                      ; 005c2279
        ;   XREF to: 005c2235 (CONDITIONAL_JUMP)  ; LAB_005c2235
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005c227b
        ;   Label: LAB_005c227b
    MOV AL,byte ptr [EBP + -0x1]        ; 005c227f
    DEC EBP                             ; 005c2282
    LEA ESI,[EBX + 0x1]                 ; 005c2283
    MOV byte ptr [EBX],AL               ; 005c2286
    MOV dword ptr [ESP + 0x3c],ESI      ; 005c2288
    TEST AL,AL                          ; 005c228c
    JNZ 0x005c227b                      ; 005c228e
        ;   XREF to: 005c227b (CONDITIONAL_JUMP)  ; LAB_005c227b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005c2290
    ADD ESP,0x40                        ; 005c2294
    POP EBP                             ; 005c2297
    POP ES                              ; 005c2298
    POP EDI                             ; 005c2299
    POP ESI                             ; 005c229a
    POP EBX                             ; 005c229b
    RET                                 ; 005c229c

