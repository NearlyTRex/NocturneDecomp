; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a8a1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450fc0
        ;   Label: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
    PUSH ESI                            ; 00450fc1
    PUSH EDI                            ; 00450fc2
    PUSH EBP                            ; 00450fc3
    SUB ESP,0xc                         ; 00450fc4
    MOV EBP,dword ptr [ESP + 0x20]      ; 00450fc7
    MOV EDI,dword ptr [ESP + 0x24]      ; 00450fcb
    XOR EBX,EBX                         ; 00450fcf
    MOV ECX,dword ptr [EBP + 0x154]     ; 00450fd1
    MOV dword ptr [ESP],EBX             ; 00450fd7
    TEST ECX,ECX                        ; 00450fda
    JLE 0x00451075                      ; 00450fdc
        ;   XREF to: 00451075 (CONDITIONAL_JUMP)  ; LAB_00451075
    MOV EAX,dword ptr [EDI + 0x1c4c]    ; 00450fe2
    MOV EDX,dword ptr [EDI + 0x1c48]    ; 00450fe8
    MOV dword ptr [ESP + 0x4],EAX       ; 00450fee
    MOV dword ptr [ESP + 0x8],EDX       ; 00450ff2
    MOV ESI,dword ptr [EDI + 0x14c8]    ; 00450ff6
        ;   Label: LAB_00450ff6
    MOV EAX,dword ptr [EDI + 0x1888]    ; 00450ffc
    SUB EAX,ESI                         ; 00451002
    LEA EDX,[EAX + 0x1]                 ; 00451004
    LEA ECX,[ESI*0x4 + 0x0]             ; 00451007
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045100e
    MOV ESI,dword ptr [ESP + 0x4]       ; 00451012
    ADD EAX,ECX                         ; 00451016
    ADD ECX,ESI                         ; 00451018
    TEST EDX,EDX                        ; 0045101a
    JLE 0x0045103e                      ; 0045101c
        ;   XREF to: 0045103e (CONDITIONAL_JUMP)  ; LAB_0045103e
    CMP dword ptr [EAX],0x0             ; 0045101e
        ;   Label: LAB_0045101e
    JBE 0x00451033                      ; 00451021
        ;   XREF to: 00451033 (CONDITIONAL_JUMP)  ; LAB_00451033
    MOV ESI,dword ptr [ECX]             ; 00451023
    MOV SI,word ptr [ESI]               ; 00451025
    AND ESI,0xffff                      ; 00451028
    CMP ESI,dword ptr [EAX]             ; 0045102e
    JBE 0x00451033                      ; 00451030
        ;   XREF to: 00451033 (CONDITIONAL_JUMP)  ; LAB_00451033
    INC EBX                             ; 00451032
    ADD EAX,0x4                         ; 00451033
        ;   Label: LAB_00451033
    DEC EDX                             ; 00451036
    ADD ECX,0x4                         ; 00451037
    TEST EDX,EDX                        ; 0045103a
    JG 0x0045101e                       ; 0045103c
        ;   XREF to: 0045101e (CONDITIONAL_JUMP)  ; LAB_0045101e
    CMP EBX,0x300                       ; 0045103e
        ;   Label: LAB_0045103e
    JG 0x0045107f                       ; 00451044
        ;   XREF to: 0045107f (CONDITIONAL_JUMP)  ; LAB_0045107f
    MOV ESI,dword ptr [ESP + 0x4]       ; 00451046
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045104a
    MOV EDX,dword ptr [ESP]             ; 0045104e
    ADD EDI,0x4                         ; 00451051
    MOV ECX,dword ptr [EBP + 0x154]     ; 00451054
    ADD ESI,0x500                       ; 0045105a
    ADD EAX,0x500                       ; 00451060
    INC EDX                             ; 00451065
    MOV dword ptr [ESP + 0x4],ESI       ; 00451066
    MOV dword ptr [ESP + 0x8],EAX       ; 0045106a
    MOV dword ptr [ESP],EDX             ; 0045106e
    CMP EDX,ECX                         ; 00451071
    JL 0x00450ff6                       ; 00451073
        ;   XREF to: 00450ff6 (CONDITIONAL_JUMP)  ; LAB_00450ff6
    XOR EAX,EAX                         ; 00451075
        ;   Label: LAB_00451075
    ADD ESP,0xc                         ; 00451077
    POP EBP                             ; 0045107a
    POP EDI                             ; 0045107b
    POP ESI                             ; 0045107c
    POP EBX                             ; 0045107d
    RET                                 ; 0045107e
    MOV EAX,0x1                         ; 0045107f
        ;   Label: LAB_0045107f
    ADD ESP,0xc                         ; 00451084
    POP EBP                             ; 00451087
    POP EDI                             ; 00451088
    POP ESI                             ; 00451089
    POP EBX                             ; 0045108a
    RET                                 ; 0045108b

