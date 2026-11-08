; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_005915b0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[6]:
;   FUN_00420e90 at 004216e1
;   FUN_00455d10 at 0045619e
;   FUN_004568e0 at 00457bc1
;   FUN_004b22c0 at 004b23b8
;   FUN_00546f40 at 005470ff
;   FUN_00568500 at 0056914f
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005915b0
        ;   Label: FUN_005915b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005915b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005915b7
    FLD float ptr [EDX + 0x4]           ; 005915bb
    FMUL float ptr [EAX + 0x4]          ; 005915be
    FLD float ptr [EDX]                 ; 005915c1
    FMUL float ptr [EAX]                ; 005915c3
    FADDP                               ; 005915c5
    FLD float ptr [EDX + 0x8]           ; 005915c7
    FMUL float ptr [EAX + 0x8]          ; 005915ca
    FADDP                               ; 005915cd
    FADD float ptr [EAX + 0xc]          ; 005915cf
    FSTP float ptr [ESP]                ; 005915d2
    FLD float ptr [EDX + 0x4]           ; 005915d5
    FMUL float ptr [EAX + 0x14]         ; 005915d8
    FLD float ptr [EDX]                 ; 005915db
    FMUL float ptr [EAX + 0x10]         ; 005915dd
    FADDP                               ; 005915e0
    FLD float ptr [EDX + 0x8]           ; 005915e2
    FMUL float ptr [EAX + 0x18]         ; 005915e5
    FADDP                               ; 005915e8
    FADD float ptr [EAX + 0x1c]         ; 005915ea
    FSTP float ptr [ESP + 0x4]          ; 005915ed
    FLD float ptr [EDX + 0x4]           ; 005915f1
    FMUL float ptr [EAX + 0x24]         ; 005915f4
    FLD float ptr [EDX]                 ; 005915f7
    FMUL float ptr [EAX + 0x20]         ; 005915f9
    FADDP                               ; 005915fc
    FLD float ptr [EDX + 0x8]           ; 005915fe
    FMUL float ptr [EAX + 0x28]         ; 00591601
    FADDP                               ; 00591604
    MOV ECX,EDX                         ; 00591606
    FADD float ptr [EAX + 0x2c]         ; 00591608
    MOV EAX,ESP                         ; 0059160b
    FSTP float ptr [ESP + 0x8]          ; 0059160d
    CMP EDX,EAX                         ; 00591611
    JNZ 0x0059161b                      ; 00591613
        ;   XREF to: 0059161b (CONDITIONAL_JUMP)  ; LAB_0059161b
    MOV EAX,ECX                         ; 00591615
    ADD ESP,0xc                         ; 00591617
    RET                                 ; 0059161a
    MOV EAX,dword ptr [ESP]             ; 0059161b
        ;   Label: LAB_0059161b
    MOV dword ptr [EDX],EAX             ; 0059161e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00591620
    MOV dword ptr [EDX + 0x4],EAX       ; 00591624
    MOV EAX,dword ptr [ESP + 0x8]       ; 00591627
    MOV dword ptr [EDX + 0x8],EAX       ; 0059162b
    MOV EAX,ECX                         ; 0059162e
    ADD ESP,0xc                         ; 00591630
    RET                                 ; 00591633

