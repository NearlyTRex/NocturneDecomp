; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568a50(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00570a70 at 00570a9f
;   crt_unknown.c_FUN_005634b0 at 0056351e
;
; Referenced Globals:
;   void* PTR_CloseHandle_0057548c = 00175ad4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d58
;   undefined4 DAT_005c1d60
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   CloseHandle
;   FUN_00568e80
;   FUN_0056f278
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568a50
        ;   Label: FUN_00568a50
    PUSH ESI                            ; 00568a51
    PUSH EDI                            ; 00568a52
    PUSH EBP                            ; 00568a53
    SUB ESP,0x4                         ; 00568a54
    MOV EBX,dword ptr [ESP + 0x18]      ; 00568a57
    TEST EBX,EBX                        ; 00568a5b
    JL 0x00568a67                       ; 00568a5d
        ;   XREF to: 00568a67 (CONDITIONAL_JUMP)  ; LAB_00568a67
    CMP EBX,dword ptr [0x005c1f90]      ; 00568a5f | DAT_005c1f90
    JBE 0x00568a7b                      ; 00568a65
        ;   XREF to: 00568a7b (CONDITIONAL_JUMP)  ; LAB_00568a7b
    PUSH 0x4                            ; 00568a67
        ;   Label: LAB_00568a67
    CALL FUN_00568e80                   ; 00568a69
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 00568a6e
    ADD ESP,0x4                         ; 00568a73
    JMP 0x00568aec                      ; 00568a76
        ;   XREF to: 00568aec (UNCONDITIONAL_JUMP)  ; LAB_00568aec
    MOV ESI,dword ptr [0x005c1f54]      ; 00568a7b | DAT_005c1f54
        ;   Label: LAB_00568a7b
    MOV ECX,dword ptr [0x005c1d60]      ; 00568a81 | DAT_005c1d60
    XOR EBP,EBP                         ; 00568a87
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 00568a89
    XOR EDI,EDI                         ; 00568a8c
    MOV dword ptr [ESP],EAX             ; 00568a8e
    TEST ECX,ECX                        ; 00568a91
    JZ 0x00568abb                       ; 00568a93
        ;   XREF to: 00568abb (CONDITIONAL_JUMP)  ; LAB_00568abb
    PUSH EBX                            ; 00568a95
    CALL dword ptr [0x005c1d54]         ; 00568a96 | DAT_005c1d54
    MOV ESI,EAX                         ; 00568a9c
    ADD ESP,0x4                         ; 00568a9e
    TEST EAX,EAX                        ; 00568aa1
    JZ 0x00568abb                       ; 00568aa3
        ;   XREF to: 00568abb (CONDITIONAL_JUMP)  ; LAB_00568abb
    PUSH EBX                            ; 00568aa5
    CALL dword ptr [0x005c1d58]         ; 00568aa6 | DAT_005c1d58
    ADD ESP,0x4                         ; 00568aac
    PUSH ESI                            ; 00568aaf
    CALL dword ptr [0x005c1d60]         ; 00568ab0 | DAT_005c1d60
    ADD ESP,0x4                         ; 00568ab6
    JMP 0x00568adf                      ; 00568ab9
        ;   XREF to: 00568adf (UNCONDITIONAL_JUMP)  ; LAB_00568adf
    TEST EBP,EBP                        ; 00568abb
        ;   Label: LAB_00568abb
    JNZ 0x00568adf                      ; 00568abd
        ;   XREF to: 00568adf (CONDITIONAL_JUMP)  ; LAB_00568adf
    MOV ESI,dword ptr [ESP]             ; 00568abf
    PUSH ESI                            ; 00568ac2
    CALL dword ptr CS:[0x57548c]        ; 00568ac3 | PTR_CloseHandle_0057548c
    TEST EAX,EAX                        ; 00568aca
    JNZ 0x00568adf                      ; 00568acc
        ;   XREF to: 00568adf (CONDITIONAL_JUMP)  ; LAB_00568adf
    PUSH 0x4                            ; 00568ace
    MOV EDI,0xffffffff                  ; 00568ad0
    CALL FUN_00568e80                   ; 00568ad5
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 00568ada
    JMP 0x00568aea                      ; 00568add
        ;   XREF to: 00568aea (UNCONDITIONAL_JUMP)  ; LAB_00568aea
    PUSH 0x0                            ; 00568adf
        ;   Label: LAB_00568adf
    PUSH EBX                            ; 00568ae1
    CALL FUN_0056f278                   ; 00568ae2
        ;   XREF to: 0056f278 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f278()
    ADD ESP,0x8                         ; 00568ae7
    MOV EAX,EDI                         ; 00568aea
        ;   Label: LAB_00568aea
    ADD ESP,0x4                         ; 00568aec
        ;   Label: LAB_00568aec
    POP EBP                             ; 00568aef
    POP EDI                             ; 00568af0
    POP ESI                             ; 00568af1
    POP EBX                             ; 00568af2
    RET                                 ; 00568af3

