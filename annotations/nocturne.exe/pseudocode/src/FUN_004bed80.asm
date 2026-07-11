; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004bed80(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004befa0 at 004bf229
;
; Referenced Globals:
;   string s_\"%[^\"]\",_\"%[^\"]\",_\"%[^\"]\"_00586d58
;
; Called Functions:
;   FUN_00563350
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bed80
        ;   Label: FUN_004bed80
    LEA EAX,[EDX + 0x200]               ; 004bed84
    PUSH EAX                            ; 004bed8a
    LEA EAX,[EDX + 0x100]               ; 004bed8b
    PUSH EAX                            ; 004bed91
    PUSH EDX                            ; 004bed92
    PUSH 0x586d58                       ; 004bed93 | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bed98
    PUSH EDX                            ; 004bed9c
    CALL FUN_00563350                   ; 004bed9d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x14                        ; 004beda2
    CMP EAX,0x3                         ; 004beda5
    SETZ AL                             ; 004beda8
    AND EAX,0xff                        ; 004bedab
    RET                                 ; 004bedb0

