; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057f8e0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fd52c
;   undefined4 DAT_005fd530
;
; Called Functions:
;   FUN_00409ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057f8e0
        ;   Label: FUN_0057f8e0
    PUSH ESI                            ; 0057f8e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0057f8e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057f8e6
    PUSH EBX                            ; 0057f8ea
    PUSH ESI                            ; 0057f8eb
    CALL FUN_00409ed0                   ; 0057f8ec
        ;   XREF to: 00409ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ed0()
    MOV EDX,dword ptr [ESI + 0x9b4]     ; 0057f8f1
    ADD ESP,0x8                         ; 0057f8f7
    TEST EDX,EDX                        ; 0057f8fa
    JNZ 0x0057f901                      ; 0057f8fc
        ;   XREF to: 0057f901 (CONDITIONAL_JUMP)  ; LAB_0057f901
    POP ESI                             ; 0057f8fe
    POP EBX                             ; 0057f8ff
    RET                                 ; 0057f900
    MOV dword ptr [EBX],0x1             ; 0057f901
        ;   Label: LAB_0057f901
    MOV EAX,dword ptr [ESI + 0x9b8]     ; 0057f907
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 0057f90d
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 0057f914
    MOV dword ptr [EBX + 0x4],EAX       ; 0057f91b
    FLD float ptr [0x005fd530]          ; 0057f91e | DAT_005fd530
    FSUB float ptr [ESI + 0x30]         ; 0057f924
    FLD float ptr [0x005fd52c]          ; 0057f927 | DAT_005fd52c
    FXCH                                ; 0057f92d
    FSTP float ptr [EBX + 0x18]         ; 0057f92f
    FSUB float ptr [ESI + 0x30]         ; 0057f932
    MOV dword ptr [EBX + 0x8],0xc0800000 ; 0057f935
    FSTP float ptr [EBX + 0x1c]         ; 0057f93c
    MOV dword ptr [EBX + 0xc],0x0       ; 0057f93f
    POP ESI                             ; 0057f946
    POP EBX                             ; 0057f947
    RET                                 ; 0057f948

