; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; SProjectedVertex * Stack[0xc]:4   projected_vertex
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[10]:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 at 0041d001
;   core_fire.cpp_CFireball_render_FUN_00484390 at 00484a63
;   core_fire.cpp_CPopcorn_render_FUN_00489990 at 00489bc0
;   core_fire.cpp_CRainDrop_render_FUN_00489d00 at 00489f2b
;   core_fire.cpp_CShell_render_FUN_004896d0 at 00489759
;   core_fire.cpp_CSmokeParticle_render_FUN_00482950 at 00482c25
;   core_fire.cpp_CSpark_render_FUN_004838c0 at 00483958
;   core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0 at 0048d905
;   core_gore.cpp_CBloodParticle_render_FUN_004ae190 at 004ae4c8
;   core_set.cpp_CDemonSet_FUN_00509a80 at 00509d5b
;
; Referenced Globals:
;   float FLOAT_0059bddc = 256
;   undefined4 DAT_005ad450
;   undefined4 DAT_005ad454
;   undefined4 DAT_005ad458
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_00b0e2fc
;   undefined4 DAT_0140efa8
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;   undefined4 DAT_01c038f4
;   ulong g_SolidColorMode
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00447670
        ;   Label: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
    SUB ESP,0xc                         ; 00447671
    MOV EAX,dword ptr [ESP + 0x18]      ; 00447674
    TEST EAX,EAX                        ; 00447678
    JZ 0x00447692                       ; 0044767a
        ;   XREF to: 00447692 (CONDITIONAL_JUMP)  ; LAB_00447692
    CMP dword ptr [0x0140efa8],0x0      ; 0044767c | DAT_0140efa8
    JZ 0x0044769c                       ; 00447683
        ;   XREF to: 0044769c (CONDITIONAL_JUMP)  ; LAB_0044769c
    XOR EBP,EBP                         ; 00447685
    MOV dword ptr [0x01c038f4],EBP      ; 00447687 | DAT_01c038f4
    ADD ESP,0xc                         ; 0044768d
    POP EBP                             ; 00447690
    RET                                 ; 00447691
    MOV [0x01c038f4],EAX                ; 00447692 | DAT_01c038f4
        ;   Label: LAB_00447692
    ADD ESP,0xc                         ; 00447697
    POP EBP                             ; 0044769a
    RET                                 ; 0044769b
    PUSH EDI                            ; 0044769c
        ;   Label: LAB_0044769c
    PUSH ESI                            ; 0044769d
    PUSH EBX                            ; 0044769e
    LEA EBX,[ESP + 0xc]                 ; 0044769f
    MOV ECX,dword ptr [ESP + 0x28]      ; 004476a3
    FLD float ptr [EAX]                 ; 004476a7
    FMUL float ptr [0x0059bddc]         ; 004476a9 | FLOAT_0059bddc
    FISTP dword ptr [EBX]               ; 004476af
    FLD float ptr [EAX + 0x4]           ; 004476b1
    FMUL float ptr [0x0059bddc]         ; 004476b4 | FLOAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 004476ba
    FLD float ptr [EAX + 0x8]           ; 004476bd
    FMUL float ptr [0x0059bddc]         ; 004476c0 | FLOAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 004476c6
    PUSH ECX                            ; 004476c9
    LEA EAX,[ESP + 0x10]                ; 004476ca
    PUSH EAX                            ; 004476ce
    MOV EBX,dword ptr [ESP + 0x28]      ; 004476cf
    PUSH EBX                            ; 004476d3
    CALL core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0 ; 004476d4
        ;   XREF to: 004475a0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(CDemonCamera * this_ptr, CVector3i * world_position, SProjectedVertex * projected_vertex)
    MOV EDX,dword ptr [0x005ad454]      ; 004476d9 | DAT_005ad454
    MOV EDI,dword ptr [0x005b7624]      ; 004476df | g_BitsPerPixel
    ADD ESP,0xc                         ; 004476e5
    MOV ESI,EAX                         ; 004476e8
    MOV EAX,[0x005ad458]                ; 004476ea | DAT_005ad458
    MOV EBX,dword ptr [EDX*0x4 + 0xb0e1fc] ; 004476ef | DAT_00b0e2fc
    MOV EDX,dword ptr [0x005ad450]      ; 004476f6 | DAT_005ad450
    AND EBX,0xff                        ; 004476fc
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 00447702 | DAT_00b0e2fc
    MOV EDX,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00447709 | DAT_00b0e2fc
    AND EAX,0xff                        ; 00447710
    AND EDX,0xff                        ; 00447715
    CMP EDI,0x20                        ; 0044771b
    JNZ 0x00447752                      ; 0044771e
        ;   XREF to: 00447752 (CONDITIONAL_JUMP)  ; LAB_00447752
    MOV CL,byte ptr [0x01c00624]        ; 00447720 | g_RedBitPosition
    SHL EDX,CL                          ; 00447726
    MOV CL,byte ptr [0x01c00630]        ; 00447728 | g_GreenBitPosition
    SHL EBX,CL                          ; 0044772e
    MOV CL,byte ptr [0x01c0063c]        ; 00447730 | g_BlueBitPosition
    OR EDX,EBX                          ; 00447736
    SHL EAX,CL                          ; 00447738
    MOV ECX,EDX                         ; 0044773a
    OR ECX,EAX                          ; 0044773c
        ;   Label: LAB_0044773c
    MOV dword ptr [0x01c038f4],ESI      ; 0044773e | DAT_01c038f4
    MOV dword ptr [0x01c039a8],ECX      ; 00447744 | g_SolidColorMode
    POP EBX                             ; 0044774a
    POP ESI                             ; 0044774b
    POP EDI                             ; 0044774c
    ADD ESP,0xc                         ; 0044774d
    POP EBP                             ; 00447750
    RET                                 ; 00447751
    MOV ECX,EDX                         ; 00447752
        ;   Label: LAB_00447752
    SHL EBX,0x8                         ; 00447754
    SHL ECX,0x10                        ; 00447757
    OR ECX,EBX                          ; 0044775a
    JMP 0x0044773c                      ; 0044775c
        ;   XREF to: 0044773c (UNCONDITIONAL_JUMP)  ; LAB_0044773c

