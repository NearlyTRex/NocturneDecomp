; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044bf20(int *param_1)
;
;
; XREF[2]:
;   FUN_0044bf90 at 0044c082
;   FUN_0044c190 at 0044c278
;
; Referenced Globals:
;   string s_..\\core\\dfilter.cpp_0057bee0
;   string s_CDemonFilter::allocMemory_-_Out_o_0057bef4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0044bf70
;   FUN_004c8440
;   FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bf20
        ;   Label: FUN_0044bf20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bf21
    PUSH EBX                            ; 0044bf25
    CALL FUN_0044bf70                   ; 0044bf26
        ;   XREF to: 0044bf70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044bf70()
    MOV EAX,dword ptr [EBX]             ; 0044bf2b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0044bf2d
    ADD ESP,0x4                         ; 0044bf31
    PUSH EAX                            ; 0044bf34
    CALL FUN_005635b0                   ; 0044bf35
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 0044bf3a
    MOV dword ptr [EBX + 0x48],EAX      ; 0044bf3d
    TEST EAX,EAX                        ; 0044bf40
    JZ 0x0044bf46                       ; 0044bf42
        ;   XREF to: 0044bf46 (CONDITIONAL_JUMP)  ; LAB_0044bf46
    POP EBX                             ; 0044bf44
    RET                                 ; 0044bf45
    PUSH ESI                            ; 0044bf46
        ;   Label: LAB_0044bf46
    MOV EBX,0x57bee0                    ; 0044bf47 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 0044bf4c
    PUSH 0x57bef4                       ; 0044bf51 | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x01cc4800],EBX      ; 0044bf56 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044bf5c | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044bf62
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044bf67
    POP ESI                             ; 0044bf6a
    POP EBX                             ; 0044bf6b
    RET                                 ; 0044bf6c

