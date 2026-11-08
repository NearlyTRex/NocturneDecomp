; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057e110(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0057de80 at 0057dec5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e110
        ;   Label: FUN_0057e110
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057e111
    PUSH EBX                            ; 0057e115
    MOV EAX,dword ptr [EBX]             ; 0057e116
    CALL dword ptr [EAX + 0x14]         ; 0057e118
    MOV dword ptr [EBX + 0xc],0x0       ; 0057e11b
    MOV dword ptr [EBX + 0x10],0x0      ; 0057e122
    ADD ESP,0x4                         ; 0057e129
    MOV dword ptr [EBX + 0x14],0x0      ; 0057e12c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057e133
    MOV dword ptr [EBX + 0x4],EAX       ; 0057e137
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057e13a
    MOV dword ptr [EBX + 0x8],EAX       ; 0057e13e
    POP EBX                             ; 0057e141
    RET                                 ; 0057e142

