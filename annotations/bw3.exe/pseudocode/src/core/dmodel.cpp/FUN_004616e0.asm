; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_FUN_004616e0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 at 00460621
;
; Referenced Globals:
;   undefined4 DAT_005bb95c
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004616e0
        ;   Label: core_dmodel.cpp_FUN_004616e0
    PUSH ESI                            ; 004616e1
    PUSH EDI                            ; 004616e2
    PUSH EBP                            ; 004616e3
    SUB ESP,0x18                        ; 004616e4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004616e7
    XOR EDX,EDX                         ; 004616eb
    MOV ECX,dword ptr [EBP + 0x100]     ; 004616ed
    MOV dword ptr [ESP + 0x10],EDX      ; 004616f3
    TEST ECX,ECX                        ; 004616f7
    JLE 0x00461838                      ; 004616f9
        ;   XREF to: 00461838 (CONDITIONAL_JUMP)  ; LAB_00461838
    LEA EAX,[EBP + 0x338]               ; 004616ff
    MOV dword ptr [ESP + 0xc],EDX       ; 00461705
    MOV dword ptr [ESP + 0x14],EAX      ; 00461709
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046170d
        ;   Label: LAB_0046170d
    IMUL EAX,dword ptr [EBP + 0x104]    ; 00461711
    IMUL EAX,EAX,0xc                    ; 00461718
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046171b
    MOV EDI,dword ptr [EBP + 0x350]     ; 0046171f
    ADD EDI,EBX                         ; 00461725
    MOV EBX,dword ptr [EBP + 0x10c]     ; 00461727
    ADD EBX,EAX                         ; 0046172d
    FLD double ptr [0x005bb95c]         ; 0046172f | DAT_005bb95c
    FILD dword ptr [EBX]                ; 00461735
    FMUL ST1                            ; 00461737
    FSTP float ptr [ESP]                ; 00461739
    FILD dword ptr [EBX + 0x4]          ; 0046173c
    FMUL ST1                            ; 0046173f
    FSTP float ptr [ESP + 0x4]          ; 00461741
    FILD dword ptr [EBX + 0x8]          ; 00461745
    FMULP                               ; 00461748
    MOV ESI,EDI                         ; 0046174a
    MOV EAX,ESP                         ; 0046174c
    FSTP float ptr [ESP + 0x8]          ; 0046174e
    CMP EDI,EAX                         ; 00461752
    JNZ 0x00461840                      ; 00461754
        ;   XREF to: 00461840 (CONDITIONAL_JUMP)  ; LAB_00461840
    MOV EAX,ESP                         ; 0046175a
        ;   Label: LAB_0046175a
    ADD ESI,0xc                         ; 0046175c
    CMP ESI,EAX                         ; 0046175f
    JZ 0x00461776                       ; 00461761
        ;   XREF to: 00461776 (CONDITIONAL_JUMP)  ; LAB_00461776
    MOV EAX,dword ptr [ESP]             ; 00461763
    MOV dword ptr [ESI],EAX             ; 00461766
    MOV EAX,dword ptr [ESP + 0x4]       ; 00461768
    MOV dword ptr [ESI + 0x4],EAX       ; 0046176c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046176f
    MOV dword ptr [ESI + 0x8],EAX       ; 00461773
    MOV ESI,0x1                         ; 00461776
        ;   Label: LAB_00461776
    CMP ESI,dword ptr [EBP + 0x104]     ; 0046177b
    JGE 0x004617c3                      ; 00461781
        ;   XREF to: 004617c3 (CONDITIONAL_JUMP)  ; LAB_004617c3
    FILD dword ptr [EBX + 0xc]          ; 00461783
        ;   Label: LAB_00461783
    FMUL double ptr [0x005bb95c]        ; 00461786 | DAT_005bb95c
    FSTP float ptr [ESP]                ; 0046178c
    FILD dword ptr [EBX + 0x10]         ; 0046178f
    FMUL double ptr [0x005bb95c]        ; 00461792 | DAT_005bb95c
    MOV EAX,ESP                         ; 00461798
    FSTP float ptr [ESP + 0x4]          ; 0046179a
    FILD dword ptr [EBX + 0x14]         ; 0046179e
    FMUL double ptr [0x005bb95c]        ; 004617a1 | DAT_005bb95c
    PUSH EAX                            ; 004617a7
    ADD EBX,0xc                         ; 004617a8
    INC ESI                             ; 004617ab
    PUSH EDI                            ; 004617ac
    FSTP float ptr [ESP + 0x10]         ; 004617ad
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 004617b1
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    MOV EDX,dword ptr [EBP + 0x104]     ; 004617b6
    ADD ESP,0x8                         ; 004617bc
    CMP ESI,EDX                         ; 004617bf
    JL 0x00461783                       ; 004617c1
        ;   XREF to: 00461783 (CONDITIONAL_JUMP)  ; LAB_00461783
    CMP dword ptr [ESP + 0x10],0x0      ; 004617c3
        ;   Label: LAB_004617c3
    JNZ 0x004617fb                      ; 004617c8
        ;   XREF to: 004617fb (CONDITIONAL_JUMP)  ; LAB_004617fb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004617ca
    MOV EBX,EDI                         ; 004617ce
    CMP EDI,EAX                         ; 004617d0
    JZ 0x004617e4                       ; 004617d2
        ;   XREF to: 004617e4 (CONDITIONAL_JUMP)  ; LAB_004617e4
    MOV EDX,dword ptr [EDI]             ; 004617d4
    MOV dword ptr [EAX],EDX             ; 004617d6
    MOV EDX,dword ptr [EDI + 0x4]       ; 004617d8
    MOV dword ptr [EAX + 0x4],EDX       ; 004617db
    MOV EDX,dword ptr [EDI + 0x8]       ; 004617de
    MOV dword ptr [EAX + 0x8],EDX       ; 004617e1
    ADD EAX,0xc                         ; 004617e4
        ;   Label: LAB_004617e4
    CMP EAX,EBX                         ; 004617e7
    JZ 0x004617fb                       ; 004617e9
        ;   XREF to: 004617fb (CONDITIONAL_JUMP)  ; LAB_004617fb
    MOV EDX,dword ptr [EBX]             ; 004617eb
    MOV dword ptr [EAX],EDX             ; 004617ed
    MOV EDX,dword ptr [EBX + 0x4]       ; 004617ef
    MOV dword ptr [EAX + 0x4],EDX       ; 004617f2
    MOV EDX,dword ptr [EBX + 0x8]       ; 004617f5
    MOV dword ptr [EAX + 0x8],EDX       ; 004617f8
    PUSH EDI                            ; 004617fb
        ;   Label: LAB_004617fb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004617fc
    PUSH EBX                            ; 00461800
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 00461801
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00461806
    ADD EDI,0xc                         ; 00461809
    PUSH EDI                            ; 0046180c
    PUSH EBX                            ; 0046180d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 0046180e
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00461813
    MOV EDX,dword ptr [EBP + 0x100]     ; 00461816
    MOV EDI,dword ptr [ESP + 0xc]       ; 0046181c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00461820
    ADD EDI,0x18                        ; 00461824
    INC EAX                             ; 00461827
    MOV dword ptr [ESP + 0xc],EDI       ; 00461828
    MOV dword ptr [ESP + 0x10],EAX      ; 0046182c
    CMP EAX,EDX                         ; 00461830
    JL 0x0046170d                       ; 00461832
        ;   XREF to: 0046170d (CONDITIONAL_JUMP)  ; LAB_0046170d
    ADD ESP,0x18                        ; 00461838
        ;   Label: LAB_00461838
    POP EBP                             ; 0046183b
    POP EDI                             ; 0046183c
    POP ESI                             ; 0046183d
    POP EBX                             ; 0046183e
    RET                                 ; 0046183f
    MOV EAX,dword ptr [ESP]             ; 00461840
        ;   Label: LAB_00461840
    MOV dword ptr [EDI],EAX             ; 00461843
    MOV EAX,dword ptr [ESP + 0x4]       ; 00461845
    MOV dword ptr [EDI + 0x4],EAX       ; 00461849
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046184c
    MOV dword ptr [EDI + 0x8],EAX       ; 00461850
    JMP 0x0046175a                      ; 00461853
        ;   XREF to: 0046175a (UNCONDITIONAL_JUMP)  ; LAB_0046175a

