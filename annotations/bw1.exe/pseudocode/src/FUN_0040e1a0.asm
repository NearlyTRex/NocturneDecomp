; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e1a0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   FUN_00469550 at 00469fcc
;   FUN_004c65f0 at 004c74ca
;   FUN_00585b00 at 005863bf
;
; Referenced Globals:
;   TerminatedCString s_Open_pct_f_005d31cd
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e1a0
        ;   Label: FUN_0040e1a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e1a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e1a5
    FLD float ptr [ESP + 0xc]           ; 0040e1a9
    MOV dword ptr [EBX + 0x31c],EAX     ; 0040e1ad
    SUB ESP,0x8                         ; 0040e1b3
    FSTP double ptr [ESP]               ; 0040e1b6
    PUSH 0x5d31cd                       ; 0040e1b9 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x00611100]      ; 0040e1be | PTR_DAT_00611100
    PUSH EDX                            ; 0040e1c4 | DAT_007db5f0
    CALL FUN_00445430                   ; 0040e1c5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    MOV ECX,dword ptr [EBX + 0x348]     ; 0040e1ca
    ADD ESP,0x10                        ; 0040e1d0
    TEST ECX,ECX                        ; 0040e1d3
    JNZ 0x0040e1eb                      ; 0040e1d5
        ;   XREF to: 0040e1eb (CONDITIONAL_JUMP)  ; LAB_0040e1eb
    MOV AH,byte ptr [EBX + 0x328]       ; 0040e1d7
    MOV dword ptr [EBX + 0x348],0x1     ; 0040e1dd
    TEST AH,AH                          ; 0040e1e7
    JNZ 0x0040e1ed                      ; 0040e1e9
        ;   XREF to: 0040e1ed (CONDITIONAL_JUMP)  ; LAB_0040e1ed
    POP EBX                             ; 0040e1eb
        ;   Label: LAB_0040e1eb
    RET                                 ; 0040e1ec
    LEA EDX,[EBX + 0x328]               ; 0040e1ed
        ;   Label: LAB_0040e1ed
    PUSH EDX                            ; 0040e1f3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e1f4
    PUSH EBX                            ; 0040e1fa
    CALL dword ptr [EAX + 0x2c]         ; 0040e1fb
    ADD ESP,0x8                         ; 0040e1fe
    POP EBX                             ; 0040e201
    RET                                 ; 0040e202

