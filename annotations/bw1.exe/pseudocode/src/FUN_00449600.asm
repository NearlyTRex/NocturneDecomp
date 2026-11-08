; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449600(int param_1)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x28]:1  local_28
;
; XREF[7]:
;   FUN_00409f20 at 0040aa52
;   FUN_0049e1a0 at 0049e95e
;   FUN_004e8630 at 004e8e88
;   FUN_00540080 at 00540792
;   FUN_00561760 at 00561f21
;   FUN_00598420 at 00598cbd
;   FUN_005a3870 at 005a3deb
;
; Referenced Globals:
;   undefined4 s_s_exploding_005d7362+1
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061f650
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   FUN_00445430
;   FUN_004b6c60
;   FUN_0051b740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449600
        ;   Label: FUN_00449600
    SUB ESP,0x3c                        ; 00449601
    MOV EBX,dword ptr [ESP + 0x44]      ; 00449604
    CMP dword ptr [EBX + 0x70],0x1      ; 00449608
    JZ 0x00449613                       ; 0044960c
        ;   XREF to: 00449613 (CONDITIONAL_JUMP)  ; LAB_00449613
    ADD ESP,0x3c                        ; 0044960e
    POP EBX                             ; 00449611
    RET                                 ; 00449612
    PUSH EDI                            ; 00449613
        ;   Label: LAB_00449613
    PUSH ESI                            ; 00449614
    PUSH EBX                            ; 00449615
    PUSH 0x5d7363                       ; 00449616 | s_s_exploding_005d7362+1
    MOV ECX,dword ptr [0x00611100]      ; 0044961b | PTR_DAT_00611100
    PUSH ECX                            ; 00449621 | DAT_007db5f0
    CALL FUN_00445430                   ; 00449622
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 00449627
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044962a
    PUSH EBX                            ; 00449630
    LEA ESI,[ESP + 0xc]                 ; 00449631
    LEA EDI,[ESP + 0x24]                ; 00449635
    CALL dword ptr [EAX + 0x1c]         ; 00449639
    MOV ECX,0x6                         ; 0044963c
    LEA ESI,[ESP + 0xc]                 ; 00449641
    LEA EAX,[ESP + 0x3c]                ; 00449645
    ADD ESP,0x4                         ; 00449649
    LEA EDX,[EBX + 0x20]                ; 0044964c
    MOVSD.REP ES:EDI,ESI                ; 0044964f
    CMP EAX,EDX                         ; 00449651
    JZ 0x00449669                       ; 00449653
        ;   XREF to: 00449669 (CONDITIONAL_JUMP)  ; LAB_00449669
    MOV EAX,dword ptr [EDX]             ; 00449655
    MOV dword ptr [ESP + 0x38],EAX      ; 00449657
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044965b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044965e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00449662
    MOV dword ptr [ESP + 0x40],EAX      ; 00449665
    PUSH 0x40800000                     ; 00449669
        ;   Label: LAB_00449669
    FLD float ptr [ESP + 0x34]          ; 0044966e
    PUSH 0x44bb8000                     ; 00449672
    LEA EAX,[ESP + 0x40]                ; 00449677
    MOV ESI,dword ptr [0x0061c010]      ; 0044967b | DAT_0061c010
    PUSH 0x42000000                     ; 00449681
    FSUB float ptr [ESP + 0x30]         ; 00449686
    PUSH EAX                            ; 0044968a
    FADD float ptr [ESP + 0x4c]         ; 0044968b
    PUSH ESI                            ; 0044968f
    FSTP float ptr [ESP + 0x50]         ; 00449690
    CALL FUN_004b6c60                   ; 00449694
        ;   XREF to: 004b6c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004b6c60()
    ADD ESP,0x14                        ; 00449699
    PUSH 0x1                            ; 0044969c
    PUSH EBX                            ; 0044969e
    MOV EDI,dword ptr [0x0061f650]      ; 0044969f | DAT_0061f650
    PUSH EDI                            ; 004496a5 | DAT_01d2c900
    CALL FUN_0051b740                   ; 004496a6
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b740()
    ADD ESP,0xc                         ; 004496ab
    MOV dword ptr [EBX + 0x70],0x2      ; 004496ae
    POP ESI                             ; 004496b5
    POP EDI                             ; 004496b6
    ADD ESP,0x3c                        ; 004496b7
    POP EBX                             ; 004496ba
    RET                                 ; 004496bb

