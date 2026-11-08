; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f910(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00488890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f910
        ;   Label: FUN_0041f910
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041f914
    MOV ECX,dword ptr [EAX + 0x281c]    ; 0041f918
    TEST ECX,ECX                        ; 0041f91e
    JZ 0x0041f923                       ; 0041f920
        ;   XREF to: 0041f923 (CONDITIONAL_JUMP)  ; LAB_0041f923
    RET                                 ; 0041f922
    PUSH EDX                            ; 0041f923
        ;   Label: LAB_0041f923
    PUSH EAX                            ; 0041f924
    MOV dword ptr [EDX + 0x4],ECX       ; 0041f925
    CALL FUN_00488890                   ; 0041f928
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 0041f92d
    RET                                 ; 0041f930

