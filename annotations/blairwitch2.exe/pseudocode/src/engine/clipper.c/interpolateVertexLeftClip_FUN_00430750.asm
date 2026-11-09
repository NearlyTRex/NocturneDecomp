; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_00430750(int *param_1,int *param_2,int *param_3)
;
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 at 00407d36
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 at 00408036
;   engine_clipper.c_FUN_00430cae at 00430d77
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 at 0043199c
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 at 0046ba37
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430750
        ;   Label: engine_clipper.c_interpolateVertexLeftClip_FUN_00430750
    PUSH ESI                            ; 00430751
    PUSH EDI                            ; 00430752
    PUSH EBP                            ; 00430753
    MOV ESI,dword ptr [ESP + 0x14]      ; 00430754
    MOV EBP,dword ptr [ESP + 0x18]      ; 00430758
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043075c
    MOV ECX,dword ptr [ESI]             ; 00430760
    ADD ECX,dword ptr [ESI + 0x8]       ; 00430762
    MOV EAX,dword ptr [EBP]             ; 00430765
    MOV EBX,ECX                         ; 00430768
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043076a
    SUB EBX,EAX                         ; 0043076d
    SUB EBX,EDX                         ; 0043076f
    MOV EDX,ECX                         ; 00430771
    CMP EDX,EBX                         ; 00430773
    JGE 0x00430789                      ; 00430775
        ;   XREF to: 00430789 (CONDITIONAL_JUMP)  ; LAB_00430789
    NEG EBX                             ; 00430777
    CMP EDX,EBX                         ; 00430779
    JLE 0x00430790                      ; 0043077b
        ;   XREF to: 00430790 (CONDITIONAL_JUMP)  ; LAB_00430790
    NEG EBX                             ; 0043077d
    XOR EAX,EAX                         ; 0043077f
    SAR EDX,0x1                         ; 00430781
    RCR EAX,0x1                         ; 00430783
    IDIV EBX                            ; 00430785
    JMP 0x00430797                      ; 00430787
        ;   XREF to: 00430797 (UNCONDITIONAL_JUMP)  ; LAB_00430797
    MOV EAX,0x7fffffff                  ; 00430789
        ;   Label: LAB_00430789
    JMP 0x00430797                      ; 0043078e
        ;   XREF to: 00430797 (UNCONDITIONAL_JUMP)  ; LAB_00430797
    NEG EBX                             ; 00430790
        ;   Label: LAB_00430790
    MOV EAX,0x80000000                  ; 00430792
    MOV ECX,EAX                         ; 00430797
        ;   Label: LAB_00430797
    MOV EBX,dword ptr [ESI + 0x8]       ; 00430799
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043079c
    MOV EDX,ECX                         ; 0043079f
    SUB EAX,EBX                         ; 004307a1
    IMUL EDX                            ; 004307a3
    ADD EAX,EAX                         ; 004307a5
    ADC EDX,EDX                         ; 004307a7
    MOV EAX,EDX                         ; 004307a9
    MOV EBX,dword ptr [ESI + 0x8]       ; 004307ab
    ADD EAX,EBX                         ; 004307ae
    MOV dword ptr [EDI + 0x8],EAX       ; 004307b0
    MOV dword ptr [EDI],EAX             ; 004307b3
    NEG EAX                             ; 004307b5
    MOV dword ptr [EDI],EAX             ; 004307b7
    MOV EAX,dword ptr [EBP + 0x4]       ; 004307b9
    SUB EAX,dword ptr [ESI + 0x4]       ; 004307bc
    MOV EDX,ECX                         ; 004307bf
    IMUL EDX                            ; 004307c1
    ADD EAX,EAX                         ; 004307c3
    ADC EDX,EDX                         ; 004307c5
    MOV EAX,EDX                         ; 004307c7
    MOV EBX,dword ptr [ESI + 0x4]       ; 004307c9
    ADD EAX,EBX                         ; 004307cc
    MOV dword ptr [EDI + 0x4],EAX       ; 004307ce
    MOV EAX,dword ptr [EBP + 0x20]      ; 004307d1
    MOV EBX,dword ptr [ESI + 0x20]      ; 004307d4
    MOV EDX,ECX                         ; 004307d7
    SUB EAX,EBX                         ; 004307d9
    IMUL EDX                            ; 004307db
    ADD EAX,EAX                         ; 004307dd
    ADC EDX,EDX                         ; 004307df
    MOV EAX,EDX                         ; 004307e1
    MOV EBX,dword ptr [ESI + 0x20]      ; 004307e3
    ADD EAX,EBX                         ; 004307e6
    MOV dword ptr [EDI + 0x20],EAX      ; 004307e8
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004307eb
    SUB EAX,dword ptr [ESI + 0x2c]      ; 004307ee
    MOV EDX,ECX                         ; 004307f1
    IMUL EDX                            ; 004307f3
    ADD EAX,EAX                         ; 004307f5
    ADC EDX,EDX                         ; 004307f7
    MOV EAX,EDX                         ; 004307f9
    MOV EBX,dword ptr [ESI + 0x2c]      ; 004307fb
    ADD EAX,EBX                         ; 004307fe
    MOV dword ptr [EDI + 0x2c],EAX      ; 00430800
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430803
    MOV EBX,dword ptr [ESI + 0x18]      ; 00430806
    MOV EDX,ECX                         ; 00430809
    SUB EAX,EBX                         ; 0043080b
    IMUL EDX                            ; 0043080d
    ADD EAX,EAX                         ; 0043080f
    ADC EDX,EDX                         ; 00430811
    MOV EAX,EDX                         ; 00430813
    MOV EBX,dword ptr [ESI + 0x18]      ; 00430815
    ADD EAX,EBX                         ; 00430818
    MOV dword ptr [EDI + 0x18],EAX      ; 0043081a
    MOV EBP,dword ptr [EBP + 0x1c]      ; 0043081d
    SUB EBP,dword ptr [ESI + 0x1c]      ; 00430820
    MOV EDX,ECX                         ; 00430823
    MOV EAX,EBP                         ; 00430825
    IMUL EDX                            ; 00430827
    ADD EAX,EAX                         ; 00430829
    ADC EDX,EDX                         ; 0043082b
    MOV EAX,EDX                         ; 0043082d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0043082f
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00430832
    ADD EAX,ECX                         ; 00430839
    MOV dword ptr [EDI + 0x1c],EAX      ; 0043083b
    POP EBP                             ; 0043083e
    POP EDI                             ; 0043083f
    POP ESI                             ; 00430840
    POP EBX                             ; 00430841
    RET                                 ; 00430842

