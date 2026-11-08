; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005c2310(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005bb938 at 005bbda1
;   FUN_005c2364 at 005c2387
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_0061f68c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2310
        ;   Label: FUN_005c2310
    PUSH ESI                            ; 005c2311
    PUSH EDI                            ; 005c2312
    PUSH EBP                            ; 005c2313
    SUB ESP,0x28                        ; 005c2314
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005c2317
    MOV EBP,dword ptr [ESP + 0x40]      ; 005c231b
    MOV EDI,dword ptr [ESP + 0x44]      ; 005c231f
    LEA ECX,[ESP + 0x1]                 ; 005c2323
    XOR DL,DL                           ; 005c2327
    MOV ESI,EBP                         ; 005c2329
    MOV byte ptr [ESP],DL               ; 005c232b
    LEA EBX,[ESP + 0x24]                ; 005c232e
        ;   Label: LAB_005c232e
    MOV dword ptr [ESP + 0x24],EDI      ; 005c2332
    XOR EDX,EDX                         ; 005c2336
    DIV dword ptr [EBX]                 ; 005c2338
    MOV dword ptr [EBX],EDX             ; 005c233a
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c233c
    INC ECX                             ; 005c2340
    MOV BL,byte ptr [EBX + 0x61f68c]    ; 005c2341 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX + -0x1],BL        ; 005c2347
    TEST EAX,EAX                        ; 005c234a
    JNZ 0x005c232e                      ; 005c234c
        ;   XREF to: 005c232e (CONDITIONAL_JUMP)  ; LAB_005c232e
    INC ESI                             ; 005c234e
        ;   Label: LAB_005c234e
    MOV AL,byte ptr [ECX + -0x1]        ; 005c234f
    DEC ECX                             ; 005c2352
    MOV byte ptr [ESI + -0x1],AL        ; 005c2353
    TEST AL,AL                          ; 005c2356
    JNZ 0x005c234e                      ; 005c2358
        ;   XREF to: 005c234e (CONDITIONAL_JUMP)  ; LAB_005c234e
    MOV EAX,EBP                         ; 005c235a
    ADD ESP,0x28                        ; 005c235c
    POP EBP                             ; 005c235f
    POP EDI                             ; 005c2360
    POP ESI                             ; 005c2361
    POP EBX                             ; 005c2362
    RET                                 ; 005c2363

