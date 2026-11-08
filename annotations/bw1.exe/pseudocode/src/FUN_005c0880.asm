; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005c0880(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined        Stack[-0x8]:1  local_8
;
; XREF[26]:
;   FUN_0040cd60 at 0040cda7
;   FUN_00411060 at 004110ac
;   FUN_0041b590 at 0041b6b8
;   FUN_00422000 at 0042203f
;   FUN_00425b00 at 00425be2
;   FUN_00447fb0 at 004481a8
;   FUN_0048b150 at 0048b1a9
;   FUN_0048b880 at 0048b904
;   FUN_0048ee90 at 0048eead
;   FUN_0048ef40 at 0048ef5d
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_005fa9f4
;
; Called Functions:
;   FUN_005c3166
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c0880
        ;   Label: FUN_005c0880
    MOV EBP,ESP                         ; 005c0881
    PUSH EBX                            ; 005c0883
    SUB ESP,0x10                        ; 005c0884
    LEA EAX,[EBP + -0x14]               ; 005c0887
    PUSH EAX                            ; 005c088a
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c088b
    PUSH EDX                            ; 005c088e
    MOV EBX,dword ptr [EBP + 0x8]       ; 005c088f
    PUSH EBX                            ; 005c0892
    CALL FUN_005c3166                   ; 005c0893
        ;   XREF to: 005c3166 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3166()
    MOV dword ptr [EBP + -0xc],EAX      ; 005c0898
    MOV dword ptr [EBP + -0x8],EDX      ; 005c089b
    ADD ESP,0xc                         ; 005c089e
    FLD double ptr [EBP + -0xc]         ; 005c08a1
    FLDZ                                ; 005c08a4
    FCOMPP                              ; 005c08a6
    FNSTSW AX                           ; 005c08a8
    SAHF                                ; 005c08aa
    JBE 0x005c08b9                      ; 005c08ab
        ;   XREF to: 005c08b9 (CONDITIONAL_JUMP)  ; LAB_005c08b9
    FLD double ptr [EBP + -0x14]        ; 005c08ad
    FADD double ptr [0x005fa9f4]        ; 005c08b0 | DAT_005fa9f4
    FSTP double ptr [EBP + -0x14]       ; 005c08b6
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c08b9
        ;   Label: LAB_005c08b9
    MOV EDX,dword ptr [EBP + -0x10]     ; 005c08bc
    LEA ESP,[EBP + -0x4]                ; 005c08bf
    POP EBX                             ; 005c08c2
    POP EBP                             ; 005c08c3
    RET                                 ; 005c08c4

