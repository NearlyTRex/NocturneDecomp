; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005726c0
        ;   Label: core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0
    SUB ESP,0x2c                        ; 005726c1
    MOV EBX,dword ptr [ESP + 0x34]      ; 005726c4
    FLD float ptr [EBX + 0x15f6c4]      ; 005726c8
    FCOMP float ptr [EBX + 0x15f6c8]    ; 005726ce
    FNSTSW AX                           ; 005726d4
    SAHF                                ; 005726d6
    JNC 0x005727ec                      ; 005726d7
        ;   XREF to: 005727ec (CONDITIONAL_JUMP)  ; LAB_005727ec
    PUSH EDI                            ; 005726dd
    PUSH ESI                            ; 005726de
    LEA ESI,[EBX + 0x14d128]            ; 005726df
    LEA EAX,[EBX + 0x15f6cc]            ; 005726e5
    CMP ESI,EAX                         ; 005726eb
    JZ 0x005726ff                       ; 005726ed
        ;   XREF to: 005726ff (CONDITIONAL_JUMP)  ; LAB_005726ff
    MOV EDX,dword ptr [EAX]             ; 005726ef
    MOV dword ptr [ESI],EDX             ; 005726f1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005726f3
    MOV dword ptr [ESI + 0x4],EDX       ; 005726f6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005726f9
    MOV dword ptr [ESI + 0x8],EDX       ; 005726fc
    LEA EDI,[EBX + 0x14d11c]            ; 005726ff
        ;   Label: LAB_005726ff
    PUSH dword ptr [EBX + 0x15f6c8]     ; 00572705
    PUSH EDI                            ; 0057270b
    LEA ESI,[EBX + 0x14d110]            ; 0057270c
    PUSH ESI                            ; 00572712
    PUSH dword ptr [EBX + 0x15f6c4]     ; 00572713
    MOV EAX,dword ptr [EBX + 0x15f6d8]  ; 00572719
    PUSH EBX                            ; 0057271f
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00572720
    CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 ; 00572726
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, ...)
    MOV dword ptr [ESP + 0x44],EAX      ; 0057272b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0057272f
    MOV dword ptr [EBX + 0x15f6c4],EAX  ; 00572733
    ADD ESP,0x14                        ; 00572739
    FLD float ptr [EBX + 0x15f6c4]      ; 0057273c
    FLD1                                ; 00572742
    FCOMPP                              ; 00572744
    FNSTSW AX                           ; 00572746
    SAHF                                ; 00572748
    JC 0x005727d7                       ; 00572749
        ;   XREF to: 005727d7 (CONDITIONAL_JUMP)  ; LAB_005727d7
    FLD float ptr [EDI]                 ; 0057274f
    FSUB float ptr [ESI]                ; 00572751
    FSTP float ptr [ESP + 0x14]         ; 00572753
    FLD float ptr [EDI + 0x4]           ; 00572757
    FSUB float ptr [ESI + 0x4]          ; 0057275a
    LEA EAX,[EBX + 0x15f6c4]            ; 0057275d
    FSTP float ptr [ESP + 0x18]         ; 00572763
    FLD float ptr [EDI + 0x8]           ; 00572767
    FSUB float ptr [ESI + 0x8]          ; 0057276a
    FLD float ptr [ESP + 0x14]          ; 0057276d
    FXCH                                ; 00572771
    FSTP float ptr [ESP + 0x1c]         ; 00572773
    FMUL float ptr [EAX]                ; 00572777
    FLD float ptr [ESP + 0x18]          ; 00572779
    FXCH                                ; 0057277d
    FSTP float ptr [ESP + 0x20]         ; 0057277f
    FMUL float ptr [EAX]                ; 00572783
    FLD float ptr [ESP + 0x1c]          ; 00572785
    FXCH                                ; 00572789
    FSTP float ptr [ESP + 0x24]         ; 0057278b
    FMUL float ptr [EAX]                ; 0057278f
    FSTP float ptr [ESP + 0x28]         ; 00572791
    FLD float ptr [ESI]                 ; 00572795
    FADD float ptr [ESP + 0x20]         ; 00572797
    FSTP float ptr [ESP + 0x8]          ; 0057279b
    FLD float ptr [ESI + 0x4]           ; 0057279f
    FADD float ptr [ESP + 0x24]         ; 005727a2
    LEA EAX,[ESP + 0x8]                 ; 005727a6
    FSTP float ptr [ESP + 0xc]          ; 005727aa
    FLD float ptr [ESI + 0x8]           ; 005727ae
    FADD float ptr [ESP + 0x28]         ; 005727b1
    LEA ESI,[EBX + 0x14d138]            ; 005727b5
    FSTP float ptr [ESP + 0x10]         ; 005727bb
    CMP ESI,EAX                         ; 005727bf
    JZ 0x005727d7                       ; 005727c1
        ;   XREF to: 005727d7 (CONDITIONAL_JUMP)  ; LAB_005727d7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005727c3
    MOV dword ptr [ESI],EAX             ; 005727c7
    MOV EAX,dword ptr [ESP + 0xc]       ; 005727c9
    MOV dword ptr [ESI + 0x4],EAX       ; 005727cd
    MOV EAX,dword ptr [ESP + 0x10]      ; 005727d0
    MOV dword ptr [ESI + 0x8],EAX       ; 005727d4
    MOV EAX,dword ptr [EBX + 0x15f6c4]  ; 005727d7
        ;   Label: LAB_005727d7
    MOV dword ptr [ESP + 0x2c],EAX      ; 005727dd
    POP ESI                             ; 005727e1
    POP EDI                             ; 005727e2
    MOV EAX,dword ptr [ESP + 0x24]      ; 005727e3
    ADD ESP,0x2c                        ; 005727e7
    POP EBX                             ; 005727ea
    RET                                 ; 005727eb
    MOV dword ptr [ESP + 0x24],0x40000000 ; 005727ec
        ;   Label: LAB_005727ec
    MOV EAX,dword ptr [ESP + 0x24]      ; 005727f4
    ADD ESP,0x2c                        ; 005727f8
    POP EBX                             ; 005727fb
    RET                                 ; 005727fc

