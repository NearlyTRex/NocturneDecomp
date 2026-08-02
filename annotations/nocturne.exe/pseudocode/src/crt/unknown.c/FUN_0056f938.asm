; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0056f938(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056a388 at 0056a405
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f938
        ;   Label: crt_unknown.c_FUN_0056f938
    MOV DX,word ptr [EAX + 0x8]         ; 0056f93c
    AND DH,0x7f                         ; 0056f940
    CMP DX,0x7fff                       ; 0056f943
    JNZ 0x0056f964                      ; 0056f948
        ;   XREF to: 0056f964 (CONDITIONAL_JUMP)  ; LAB_0056f964
    CMP dword ptr [EAX + 0x4],0x80000000 ; 0056f94a
    JNZ 0x0056f95e                      ; 0056f951
        ;   XREF to: 0056f95e (CONDITIONAL_JUMP)  ; LAB_0056f95e
    CMP dword ptr [EAX],0x0             ; 0056f953
    JNZ 0x0056f95e                      ; 0056f956
        ;   XREF to: 0056f95e (CONDITIONAL_JUMP)  ; LAB_0056f95e
    MOV EAX,0x3                         ; 0056f958
    RET                                 ; 0056f95d
    MOV EAX,0x2                         ; 0056f95e
        ;   Label: LAB_0056f95e
    RET                                 ; 0056f963
    TEST word ptr [EAX + 0x8],0x7fff    ; 0056f964
        ;   Label: LAB_0056f964
    JNZ 0x0056f980                      ; 0056f96a
        ;   XREF to: 0056f980 (CONDITIONAL_JUMP)  ; LAB_0056f980
    CMP dword ptr [EAX + 0x4],0x0       ; 0056f96c
    JNZ 0x0056f97a                      ; 0056f970
        ;   XREF to: 0056f97a (CONDITIONAL_JUMP)  ; LAB_0056f97a
    CMP dword ptr [EAX],0x0             ; 0056f972
    JNZ 0x0056f97a                      ; 0056f975
        ;   XREF to: 0056f97a (CONDITIONAL_JUMP)  ; LAB_0056f97a
    XOR EAX,EAX                         ; 0056f977
    RET                                 ; 0056f979
    MOV EAX,0x4                         ; 0056f97a
        ;   Label: LAB_0056f97a
    RET                                 ; 0056f97f
    MOV EAX,0x1                         ; 0056f980
        ;   Label: LAB_0056f980
    RET                                 ; 0056f985

