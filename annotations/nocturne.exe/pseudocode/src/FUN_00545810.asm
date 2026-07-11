; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00545810(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00545a80 at 00545a8c
;
; Referenced Globals:
;   string s_Texture_cache_has_wrapped._Make_i_00596821
;   string s_Total:_%d,_32:_%d,_64:_%d,_128:_%_00596855
;
; Called Functions:
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545810
        ;   Label: FUN_00545810
    PUSH ESI                            ; 00545811
    PUSH EDI                            ; 00545812
    PUSH EBP                            ; 00545813
    MOV EAX,dword ptr [ESP + 0x14]      ; 00545814
    XOR EDI,EDI                         ; 00545818
    XOR ESI,ESI                         ; 0054581a
    XOR ECX,ECX                         ; 0054581c
    MOV EDX,dword ptr [EAX]             ; 0054581e
    XOR EBX,EBX                         ; 00545820
    TEST EDX,EDX                        ; 00545822
    JNZ 0x00545887                      ; 00545824
        ;   XREF to: 00545887 (CONDITIONAL_JUMP)  ; LAB_00545887
    CMP dword ptr [EAX + 0xd3008],0x0   ; 00545826
    JLE 0x00545861                      ; 0054582d
        ;   XREF to: 00545861 (CONDITIONAL_JUMP)  ; LAB_00545861
    CMP dword ptr [EAX + 0x8],0x20      ; 0054582f
        ;   Label: LAB_0054582f
    JNZ 0x00545836                      ; 00545833
        ;   XREF to: 00545836 (CONDITIONAL_JUMP)  ; LAB_00545836
    INC EBX                             ; 00545835
    CMP dword ptr [EAX + 0x8],0x40      ; 00545836
        ;   Label: LAB_00545836
    JNZ 0x0054583d                      ; 0054583a
        ;   XREF to: 0054583d (CONDITIONAL_JUMP)  ; LAB_0054583d
    INC EDI                             ; 0054583c
    CMP dword ptr [EAX + 0x8],0x80      ; 0054583d
        ;   Label: LAB_0054583d
    JNZ 0x00545847                      ; 00545844
        ;   XREF to: 00545847 (CONDITIONAL_JUMP)  ; LAB_00545847
    INC ESI                             ; 00545846
    CMP dword ptr [EAX + 0x8],0x100     ; 00545847
        ;   Label: LAB_00545847
    JNZ 0x00545851                      ; 0054584e
        ;   XREF to: 00545851 (CONDITIONAL_JUMP)  ; LAB_00545851
    INC ECX                             ; 00545850
    MOV EBP,dword ptr [ESP + 0x14]      ; 00545851
        ;   Label: LAB_00545851
    INC EDX                             ; 00545855
    ADD EAX,0x4                         ; 00545856
    CMP EDX,dword ptr [EBP + 0xd3008]   ; 00545859
    JL 0x0054582f                       ; 0054585f
        ;   XREF to: 0054582f (CONDITIONAL_JUMP)  ; LAB_0054582f
    PUSH ECX                            ; 00545861
        ;   Label: LAB_00545861
    PUSH ESI                            ; 00545862
    PUSH EDI                            ; 00545863
    MOV EAX,dword ptr [ESP + 0x20]      ; 00545864
    PUSH EBX                            ; 00545868
    MOV EDX,dword ptr [EAX + 0xd3008]   ; 00545869
    PUSH EDX                            ; 0054586f
    PUSH 0x596855                       ; 00545870 | = "Total: %d, 32: %d, 64: %d, 128: %d, 2..."
    MOV ECX,dword ptr [ESP + 0x30]      ; 00545875
    PUSH ECX                            ; 00545879
    CALL FUN_00563c90                   ; 0054587a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x1c                        ; 0054587f
    POP EBP                             ; 00545882
    POP EDI                             ; 00545883
    POP ESI                             ; 00545884
    POP EBX                             ; 00545885
    RET                                 ; 00545886
    PUSH 0x596821                       ; 00545887 | = "Texture cache has wrapped.  Make it b..."
        ;   Label: LAB_00545887
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054588c
    PUSH EAX                            ; 00545890
    CALL FUN_00563c90                   ; 00545891
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x8                         ; 00545896
    POP EBP                             ; 00545899
    POP EDI                             ; 0054589a
    POP ESI                             ; 0054589b
    POP EBX                             ; 0054589c
    RET                                 ; 0054589d

