; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   voxel_data
; int              Stack[0xc]:4   grid_x
; int              Stack[0x10]:4   grid_y
; int              Stack[0x14]:4   grid_z
; Local Variables:
; CVector3f        Stack[-0x34]:12  local_34
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float g_VoxelSubGridScale = 0.125
;   uchar[8] g_VoxelYBitMasks
;   undefined4 s_@_006789f9
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004973b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
    PUSH ESI                            ; 004973b1
    PUSH EDI                            ; 004973b2
    PUSH EBP                            ; 004973b3
    SUB ESP,0x30                        ; 004973b4
    MOV ESI,dword ptr [ESP + 0x44]      ; 004973b7
    MOV EBP,dword ptr [ESP + 0x48]      ; 004973bb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004973bf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004973c3
    FILD dword ptr [ESP + 0x2c]         ; 004973c7
    MOV EAX,dword ptr [ESP + 0x50]      ; 004973cb
    FMUL float ptr [ESI + 0x28]         ; 004973cf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004973d2
    FADD float ptr [ESI + 0x10]         ; 004973d6
    FILD dword ptr [ESP + 0x2c]         ; 004973d9
    FXCH                                ; 004973dd
    FSTP float ptr [ESP]                ; 004973df
    FMUL float ptr [ESI + 0x2c]         ; 004973e2
    MOV EAX,dword ptr [ESP + 0x54]      ; 004973e5
    XOR EDX,EDX                         ; 004973e9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004973eb
    FADD float ptr [ESI + 0x14]         ; 004973ef
    FILD dword ptr [ESP + 0x2c]         ; 004973f2
    FXCH                                ; 004973f6
    FSTP float ptr [ESP + 0x4]          ; 004973f8
    FMUL float ptr [ESI + 0x30]         ; 004973fc
    MOV dword ptr [ESP + 0x24],EDX      ; 004973ff
    FADD float ptr [ESI + 0x18]         ; 00497403
    MOV dword ptr [ESP + 0x18],EDX      ; 00497406
    FSTP float ptr [ESP + 0x8]          ; 0049740a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049740e
        ;   Label: LAB_0049740e
    XOR EDI,EDI                         ; 00497412
    MOV dword ptr [ESP + 0x1c],EAX      ; 00497414
    MOV dword ptr [ESP + 0x20],EAX      ; 00497418
    MOV EBX,dword ptr [EBP]             ; 0049741c
        ;   Label: LAB_0049741c
    TEST EBX,EBX                        ; 0049741f
    JZ 0x004974bf                       ; 00497421
        ;   XREF to: 004974bf (CONDITIONAL_JUMP)  ; LAB_004974bf
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00497427
    LEA EAX,[EBX + EDX*0x1]             ; 0049742b
    CMP byte ptr [EAX],0x0              ; 0049742e
    JZ 0x004974bf                       ; 00497431
        ;   XREF to: 004974bf (CONDITIONAL_JUMP)  ; LAB_004974bf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00497437
    XOR EBX,EBX                         ; 0049743b
    MOV dword ptr [ESP + 0x28],EAX      ; 0049743d
    MOV ECX,dword ptr [ESP + 0x28]      ; 00497441
        ;   Label: LAB_00497441
    MOV EAX,dword ptr [EBP]             ; 00497445
    ADD EAX,ECX                         ; 00497448
    MOV AL,byte ptr [EAX]               ; 0049744a
    XOR EDX,EDX                         ; 0049744c
    AND EAX,0xff                        ; 0049744e
    MOV DL,byte ptr [EBX + 0x6789f8]    ; 00497453 | g_VoxelYBitMasks | s_@_006789f9
    TEST EAX,EDX                        ; 00497459
    JZ 0x004974b9                       ; 0049745b
        ;   XREF to: 004974b9 (CONDITIONAL_JUMP)  ; LAB_004974b9
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049745d
    FILD dword ptr [ESP + 0x2c]         ; 00497461
    FMUL float ptr [ESI + 0x28]         ; 00497465
    FLD float ptr [0x00622b82]          ; 00497468 | g_VoxelSubGridScale
    FXCH                                ; 0049746e
    FMUL ST1                            ; 00497470
    MOV dword ptr [ESP + 0x2c],EDI      ; 00497472
    FADD float ptr [ESP]                ; 00497476
    FILD dword ptr [ESP + 0x2c]         ; 00497479
    FXCH                                ; 0049747d
    FSTP float ptr [ESP + 0xc]          ; 0049747f
    FMUL float ptr [ESI + 0x2c]         ; 00497483
    MOV EAX,dword ptr [ESP + 0x24]      ; 00497486
    FMUL ST1                            ; 0049748a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049748c
    FADD float ptr [ESP + 0x4]          ; 00497490
    FILD dword ptr [ESP + 0x2c]         ; 00497494
    FXCH                                ; 00497498
    FSTP float ptr [ESP + 0x10]         ; 0049749a
    FMUL float ptr [ESI + 0x30]         ; 0049749e
    LEA EAX,[ESP + 0xc]                 ; 004974a1
    FMULP                               ; 004974a5
    PUSH EAX                            ; 004974a7
    FADD float ptr [ESP + 0xc]          ; 004974a8
    PUSH ESI                            ; 004974ac
    FSTP float ptr [ESP + 0x1c]         ; 004974ad
    CALL core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 ; 004974b1
        ;   XREF to: 00496e70 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70(CDemonRaytrace * this_ptr, CVector3f * world_pos)
    ADD ESP,0x8                         ; 004974b6
    INC EBX                             ; 004974b9
        ;   Label: LAB_004974b9
    CMP EBX,0x8                         ; 004974ba
    JL 0x00497441                       ; 004974bd
        ;   XREF to: 00497441 (CONDITIONAL_JUMP)  ; LAB_00497441
    MOV EAX,dword ptr [ESP + 0x20]      ; 004974bf
        ;   Label: LAB_004974bf
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004974c3
    INC EDI                             ; 004974c7
    INC EAX                             ; 004974c8
    INC EBX                             ; 004974c9
    MOV dword ptr [ESP + 0x20],EAX      ; 004974ca
    MOV dword ptr [ESP + 0x1c],EBX      ; 004974ce
    CMP EDI,0x8                         ; 004974d2
    JL 0x0049741c                       ; 004974d5
        ;   XREF to: 0049741c (CONDITIONAL_JUMP)  ; LAB_0049741c
    MOV ECX,dword ptr [ESP + 0x24]      ; 004974db
    MOV EDX,dword ptr [ESP + 0x18]      ; 004974df
    INC ECX                             ; 004974e3
    ADD EDX,0x8                         ; 004974e4
    MOV dword ptr [ESP + 0x24],ECX      ; 004974e7
    MOV dword ptr [ESP + 0x18],EDX      ; 004974eb
    CMP ECX,0x8                         ; 004974ef
    JL 0x0049740e                       ; 004974f2
        ;   XREF to: 0049740e (CONDITIONAL_JUMP)  ; LAB_0049740e
    ADD ESP,0x30                        ; 004974f8
    POP EBP                             ; 004974fb
    POP EDI                             ; 004974fc
    POP ESI                             ; 004974fd
    POP EBX                             ; 004974fe
    RET                                 ; 004974ff

