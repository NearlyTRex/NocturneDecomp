; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c2310(int param_1,int *param_2)
;
;
; XREF[1]:
;   crt_file.c_makepath_FUN_005c232c at 005c23c3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c2310
        ;   Label: crt_unknown.c_FUN_005c2310
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c2314
    CMP EAX,0x5c                        ; 005c2318
    JZ 0x005c2322                       ; 005c231b
        ;   XREF to: 005c2322 (CONDITIONAL_JUMP)  ; LAB_005c2322
    CMP EAX,0x2f                        ; 005c231d
    JNZ 0x005c232b                      ; 005c2320
        ;   XREF to: 005c232b (CONDITIONAL_JUMP)  ; LAB_005c232b
    CMP dword ptr [EDX],0x0             ; 005c2322
        ;   Label: LAB_005c2322
    JNZ 0x005c2329                      ; 005c2325
        ;   XREF to: 005c2329 (CONDITIONAL_JUMP)  ; LAB_005c2329
    MOV dword ptr [EDX],EAX             ; 005c2327
    MOV EAX,dword ptr [EDX]             ; 005c2329
        ;   Label: LAB_005c2329
    RET                                 ; 005c232b
        ;   Label: LAB_005c232b

