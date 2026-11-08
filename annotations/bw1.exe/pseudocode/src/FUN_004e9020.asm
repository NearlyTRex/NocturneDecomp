; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e9020(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ea830
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9020
        ;   Label: FUN_004e9020
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e9021
    PUSH EDX                            ; 004e9025
    CALL FUN_004ea830                   ; 004e9026
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea830()
    MOV EBX,EAX                         ; 004e902b
    ADD EAX,0x158                       ; 004e902d
    ADD ESP,0x4                         ; 004e9032
    MOV dword ptr [EAX + -0x4],0x601a64 ; 004e9035
    PUSH 0x5e4409                       ; 004e903c
    MOV dword ptr [EAX + 0x1fe54],0x0   ; 004e9041
    PUSH EAX                            ; 004e904b
    MOV dword ptr [EAX + 0x1fe58],0x0   ; 004e904c
    CALL FUN_00569f50                   ; 004e9056
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    LEA EAX,[EBX + 0x1ffb4]             ; 004e905b
    MOV dword ptr [EBX + 0x1ffc0],0x3f800000 ; 004e9061
    MOV dword ptr [EAX + 0x8],0x0       ; 004e906b
    ADD ESP,0x8                         ; 004e9072
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e9075
    MOV dword ptr [EAX + 0x4],EDX       ; 004e9078
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e907b
    MOV dword ptr [EAX],EDX             ; 004e907e
    MOV EAX,EBX                         ; 004e9080
    POP EBX                             ; 004e9082
    RET                                 ; 004e9083

