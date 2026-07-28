; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_interpolateVertexTopClip_FUN_00431830(int *param_1,int *param_2,int *param_3)
;
;
; XREF[6]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290 at 0040936c
;   engine_3d.c_clipAndDrawLine3D_FUN_00409590 at 0040966c
;   engine_clipper.c_FUN_00432210 at 004329ea
;   engine_clipper.c_FUN_00432cd0 at 004334d7
;   engine_clipper.c_clipPolygonTopPlane_FUN_00431e10 at 00431ed9
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 at 004611cb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431830
        ;   Label: engine_clipper.c_interpolateVertexTopClip_FUN_00431830
    PUSH ESI                            ; 00431831
    PUSH EDI                            ; 00431832
    PUSH EBP                            ; 00431833
    MOV ESI,dword ptr [ESP + 0x14]      ; 00431834
    MOV EBP,dword ptr [ESP + 0x18]      ; 00431838
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043183c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00431840
    MOV ECX,dword ptr [ESI + 0x8]       ; 00431843
    MOV EBX,dword ptr [EBP + 0x8]       ; 00431846
    ADD EDX,ECX                         ; 00431849
    MOV ECX,dword ptr [EBP + 0x4]       ; 0043184b
    ADD ECX,EBX                         ; 0043184e
    MOV EBX,EDX                         ; 00431850
    SUB EBX,ECX                         ; 00431852
    CMP EDX,EBX                         ; 00431854
    JGE 0x0043186a                      ; 00431856
        ;   XREF to: 0043186a (CONDITIONAL_JUMP)  ; LAB_0043186a
    NEG EBX                             ; 00431858
    CMP EDX,EBX                         ; 0043185a
    JLE 0x00431871                      ; 0043185c
        ;   XREF to: 00431871 (CONDITIONAL_JUMP)  ; LAB_00431871
    NEG EBX                             ; 0043185e
    XOR EAX,EAX                         ; 00431860
    SAR EDX,0x1                         ; 00431862
    RCR EAX,0x1                         ; 00431864
    IDIV EBX                            ; 00431866
    JMP 0x00431878                      ; 00431868
        ;   XREF to: 00431878 (UNCONDITIONAL_JUMP)  ; LAB_00431878
    MOV EAX,0x7fffffff                  ; 0043186a
        ;   Label: LAB_0043186a
    JMP 0x00431878                      ; 0043186f
        ;   XREF to: 00431878 (UNCONDITIONAL_JUMP)  ; LAB_00431878
    NEG EBX                             ; 00431871
        ;   Label: LAB_00431871
    MOV EAX,0x80000000                  ; 00431873
    MOV ECX,EAX                         ; 00431878
        ;   Label: LAB_00431878
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043187a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043187d
    SUB EDX,EAX                         ; 00431880
    MOV EAX,EDX                         ; 00431882
    MOV EDX,ECX                         ; 00431884
    IMUL EDX                            ; 00431886
    ADD EAX,EAX                         ; 00431888
    ADC EDX,EDX                         ; 0043188a
    MOV EAX,EDX                         ; 0043188c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043188e
    ADD EAX,EDX                         ; 00431891
    MOV dword ptr [EDI + 0x8],EAX       ; 00431893
    MOV EDX,EAX                         ; 00431896
    MOV dword ptr [EDI + 0x4],EAX       ; 00431898
    NEG EDX                             ; 0043189b
    MOV dword ptr [EDI + 0x4],EDX       ; 0043189d
    MOV EAX,dword ptr [EBP]             ; 004318a0
    MOV EBX,dword ptr [ESI]             ; 004318a3
    MOV EDX,ECX                         ; 004318a5
    SUB EAX,EBX                         ; 004318a7
    IMUL EDX                            ; 004318a9
    ADD EAX,EAX                         ; 004318ab
    ADC EDX,EDX                         ; 004318ad
    MOV EAX,EDX                         ; 004318af
    MOV EDX,dword ptr [ESI]             ; 004318b1
    ADD EAX,EDX                         ; 004318b3
    MOV dword ptr [EDI],EAX             ; 004318b5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004318b7
    MOV EAX,dword ptr [ESI + 0x20]      ; 004318ba
    SUB EDX,EAX                         ; 004318bd
    MOV EAX,EDX                         ; 004318bf
    MOV EDX,ECX                         ; 004318c1
    IMUL EDX                            ; 004318c3
    ADD EAX,EAX                         ; 004318c5
    ADC EDX,EDX                         ; 004318c7
    MOV EAX,EDX                         ; 004318c9
    MOV EDX,dword ptr [ESI + 0x20]      ; 004318cb
    ADD EAX,EDX                         ; 004318ce
    MOV dword ptr [EDI + 0x20],EAX      ; 004318d0
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004318d3
    MOV EBX,dword ptr [ESI + 0x2c]      ; 004318d6
    MOV EDX,ECX                         ; 004318d9
    SUB EAX,EBX                         ; 004318db
    IMUL EDX                            ; 004318dd
    ADD EAX,EAX                         ; 004318df
    ADC EDX,EDX                         ; 004318e1
    MOV EAX,EDX                         ; 004318e3
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004318e5
    ADD EAX,EDX                         ; 004318e8
    MOV dword ptr [EDI + 0x2c],EAX      ; 004318ea
    MOV EDX,dword ptr [EBP + 0x18]      ; 004318ed
    MOV EAX,dword ptr [ESI + 0x18]      ; 004318f0
    SUB EDX,EAX                         ; 004318f3
    MOV EAX,EDX                         ; 004318f5
    MOV EDX,ECX                         ; 004318f7
    IMUL EDX                            ; 004318f9
    ADD EAX,EAX                         ; 004318fb
    ADC EDX,EDX                         ; 004318fd
    MOV EAX,EDX                         ; 004318ff
    MOV EDX,dword ptr [ESI + 0x18]      ; 00431901
    ADD EAX,EDX                         ; 00431904
    MOV dword ptr [EDI + 0x18],EAX      ; 00431906
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00431909
    SUB EAX,dword ptr [ESI + 0x1c]      ; 0043190c
    MOV EDX,ECX                         ; 0043190f
    IMUL EDX                            ; 00431911
    ADD EAX,EAX                         ; 00431913
    ADC EDX,EDX                         ; 00431915
    MOV EAX,EDX                         ; 00431917
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00431919
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043191c
    ADD EAX,EDX                         ; 00431923
    MOV dword ptr [EDI + 0x1c],EAX      ; 00431925
    POP EBP                             ; 00431928
    POP EDI                             ; 00431929
    POP ESI                             ; 0043192a
    POP EBX                             ; 0043192b
    RET                                 ; 0043192c

