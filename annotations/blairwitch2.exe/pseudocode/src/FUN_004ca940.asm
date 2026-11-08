; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca940(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004ca6b0 at 004ca6bf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca940
        ;   Label: FUN_004ca940
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ca941
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ca945
    MOV dword ptr [EAX + 0x10],0x1e     ; 004ca949
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ca950
    MOV dword ptr [EAX + 0x14],0x1e     ; 004ca954
    MOV dword ptr [EAX],EDX             ; 004ca95b
    MOV EBX,dword ptr [EAX + 0x14]      ; 004ca95d
    MOV EDX,dword ptr [EAX + 0x10]      ; 004ca960
    IMUL EDX,EBX                        ; 004ca963
    MOV dword ptr [EAX + 0x24],0x0      ; 004ca966
    MOV dword ptr [EAX + 0x28],0x0      ; 004ca96d
    MOV dword ptr [EAX + 0x1c],0x8      ; 004ca974
    MOV dword ptr [EAX + 0x20],0x1      ; 004ca97b
    MOV dword ptr [EAX + 0x4],ECX       ; 004ca982
    DEC ECX                             ; 004ca985
    MOV dword ptr [EAX + 0x18],EDX      ; 004ca986
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ca989
    MOV dword ptr [EAX + 0xc],ECX       ; 004ca98d
    DEC EDX                             ; 004ca990
    MOV dword ptr [EAX + 0x8],EDX       ; 004ca991
    POP EBX                             ; 004ca994
    RET                                 ; 004ca995

