; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569920(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00430060 at 0043014f
;   FUN_00569810 at 00569823
;
; Called Functions:
;   FUN_00564000
;   FUN_00569890
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569920
        ;   Label: FUN_00569920
    PUSH ESI                            ; 00569921
    MOV EBX,dword ptr [ESP + 0xc]       ; 00569922
    MOV EAX,dword ptr [ESP + 0x10]      ; 00569926
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0056992a
    JNZ 0x00569955                      ; 00569930
        ;   XREF to: 00569955 (CONDITIONAL_JUMP)  ; LAB_00569955
    MOV ECX,dword ptr [EBX + 0x2324]    ; 00569932
        ;   Label: LAB_00569932
    PUSH ECX                            ; 00569938
    MOV ESI,dword ptr [EBX + 0x2320]    ; 00569939
    PUSH ESI                            ; 0056993f
    PUSH EBX                            ; 00569940
    CALL FUN_00569eb0                   ; 00569941
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00569946
    PUSH EAX                            ; 00569949
    CALL FUN_00564000                   ; 0056994a
        ;   XREF to: 00564000 (UNCONDITIONAL_CALL)  ; undefined FUN_00564000()
    ADD ESP,0xc                         ; 0056994f
    POP ESI                             ; 00569952
    POP EBX                             ; 00569953
    RET                                 ; 00569954
    PUSH EAX                            ; 00569955
        ;   Label: LAB_00569955
    PUSH EBX                            ; 00569956
    CALL FUN_00569890                   ; 00569957
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; undefined FUN_00569890()
    ADD ESP,0x8                         ; 0056995c
    JMP 0x00569932                      ; 0056995f
        ;   XREF to: 00569932 (UNCONDITIONAL_JUMP)  ; LAB_00569932

