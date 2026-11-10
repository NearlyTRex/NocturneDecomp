; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0049d840(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   velocity
; float            Stack[0x10]:4   beam_width
; float            Stack[0x14]:4   reticle_intensity
; CVector3f *      Stack[0x18]:4   reflection_normal
; float            Stack[0x1c]:4   total_time
; int              Stack[0x20]:4   red
; int              Stack[0x24]:4   green
; int              Stack[0x28]:4   blue
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459b13
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0056b770 at 0056b8d3
;
; Referenced Globals:
;   undefined4 DAT_005d57ce
;   undefined4 DAT_005d57d2
;   undefined4 DAT_005d57da
;   undefined4 DAT_005d57e2
;   undefined4 DAT_005f64fc
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d840
        ;   Label: core_fire.cpp_CFireEffect_createLaserPath_FUN_0049d840
    PUSH ESI                            ; 0049d841
    PUSH EDI                            ; 0049d842
    PUSH EBP                            ; 0049d843
    MOV EBP,ESP                         ; 0049d844
    SUB ESP,0xa8                        ; 0049d846
    AND ESP,0xfffffff8                  ; 0049d84c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049d84f
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0049d852
    MOV EBX,dword ptr [EBP + 0x38]      ; 0049d855
    MOV dword ptr [ESP + 0x4],EAX       ; 0049d858
    FLD float ptr [ESP + 0x4]           ; 0049d85c
    FMUL float ptr [0x005d57ce]         ; 0049d860 | DAT_005d57ce
    FST float ptr [ESP + 0x8]           ; 0049d866
    FCOMP double ptr [0x005d57d2]       ; 0049d86a | DAT_005d57d2
    FNSTSW AX                           ; 0049d870
    SAHF                                ; 0049d872
    JC 0x0049da74                       ; 0049d873
        ;   XREF to: 0049da74 (CONDITIONAL_JUMP)  ; LAB_0049da74
    LEA EDI,[ESP + 0x30]                ; 0049d879
        ;   Label: LAB_0049d879
    MOV ESI,dword ptr [EBP + 0x18]      ; 0049d87d
    MOVSD ES:EDI,ESI                    ; 0049d880
    MOVSD ES:EDI,ESI                    ; 0049d881
    MOVSD ES:EDI,ESI                    ; 0049d882
    LEA EDI,[ESP + 0x3c]                ; 0049d883
    MOV ESI,EDX                         ; 0049d887
    MOVSD ES:EDI,ESI                    ; 0049d889
    MOVSD ES:EDI,ESI                    ; 0049d88a
    MOVSD ES:EDI,ESI                    ; 0049d88b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049d88c
        ;   Label: LAB_0049d88c
    FLD float ptr [ESP + 0x4]           ; 0049d890
    MOV dword ptr [ESP],EAX             ; 0049d894
    FCOMP float ptr [ESP + 0x8]         ; 0049d897
    FNSTSW AX                           ; 0049d89b
    SAHF                                ; 0049d89d
    JBE 0x0049d8a7                      ; 0049d89e
        ;   XREF to: 0049d8a7 (CONDITIONAL_JUMP)  ; LAB_0049d8a7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d8a0
    MOV dword ptr [ESP],EAX             ; 0049d8a4
    FLD float ptr [ESP + 0x3c]          ; 0049d8a7
        ;   Label: LAB_0049d8a7
    FMUL float ptr [ESP]                ; 0049d8ab
    FLD float ptr [ESP + 0x40]          ; 0049d8ae
    FMUL float ptr [ESP]                ; 0049d8b2
    FLD float ptr [ESP]                 ; 0049d8b5
    FLD ST0                             ; 0049d8b8
    FMUL double ptr [0x005d57da]        ; 0049d8ba | DAT_005d57da
    FLD float ptr [ESP + 0x44]          ; 0049d8c0
    FMUL float ptr [ESP]                ; 0049d8c4
    FXCH                                ; 0049d8c7
    FMULP ST2                           ; 0049d8c9
    FLDZ                                ; 0049d8cb
    FXCH ST2                            ; 0049d8cd
    FSTP float ptr [ESP + 0xa4]         ; 0049d8cf
    FXCH                                ; 0049d8d6
    FMUL float ptr [ESP + 0xa4]         ; 0049d8d8
    FLD float ptr [ESP + 0xa4]          ; 0049d8df
    FMUL float ptr [0x005d57e2]         ; 0049d8e6 | DAT_005d57e2
    FLD float ptr [ESP + 0x30]          ; 0049d8ec
    FLD float ptr [ESP + 0x34]          ; 0049d8f0
    FXCH ST3                            ; 0049d8f4
    FSTP float ptr [ESP + 0x90]         ; 0049d8f6
    FLD float ptr [ESP + 0x38]          ; 0049d8fd
    LEA EDI,[ESP + 0x60]                ; 0049d901
    LEA ESI,[ESP + 0x90]                ; 0049d905
    FXCH ST6                            ; 0049d90c
    FSTP float ptr [ESP + 0x78]         ; 0049d90e
    MOV EAX,dword ptr [ESP + 0x90]      ; 0049d912
    FLD float ptr [ESP + 0x4]           ; 0049d919
    FSUB float ptr [ESP]                ; 0049d91d
    FXCH ST5                            ; 0049d920
    FSTP float ptr [ESP + 0x7c]         ; 0049d922
    MOV dword ptr [ESP + 0x98],EAX      ; 0049d926
    FXCH                                ; 0049d92d
    FSTP float ptr [ESP + 0x94]         ; 0049d92f
    MOVSD ES:EDI,ESI                    ; 0049d936
    MOVSD ES:EDI,ESI                    ; 0049d937
    MOVSD ES:EDI,ESI                    ; 0049d938
    FXCH ST2                            ; 0049d939
    FSTP float ptr [ESP + 0x80]         ; 0049d93b
    LEA EDI,[ESP + 0x54]                ; 0049d942
    LEA ESI,[ESP + 0x78]                ; 0049d946
    FXCH ST2                            ; 0049d94a
    FSTP float ptr [ESP + 0x4]          ; 0049d94c
    MOVSD ES:EDI,ESI                    ; 0049d950
    MOVSD ES:EDI,ESI                    ; 0049d951
    MOVSD ES:EDI,ESI                    ; 0049d952
    FLD float ptr [ESP + 0x4]           ; 0049d953
    LEA EDI,[ESP + 0x24]                ; 0049d957
    LEA ESI,[ESP + 0x6c]                ; 0049d95b
    FXCH                                ; 0049d95f
    FADD float ptr [ESP + 0x54]         ; 0049d961
    FXCH ST2                            ; 0049d965
    FADD float ptr [ESP + 0x58]         ; 0049d967
    FXCH ST3                            ; 0049d96b
    FADD float ptr [ESP + 0x5c]         ; 0049d96d
    FXCH ST2                            ; 0049d971
    FSTP float ptr [ESP + 0x6c]         ; 0049d973
    FXCH ST2                            ; 0049d977
    FSTP float ptr [ESP + 0x70]         ; 0049d979
    FSTP float ptr [ESP + 0x74]         ; 0049d97d
    MOVSD ES:EDI,ESI                    ; 0049d981
    MOVSD ES:EDI,ESI                    ; 0049d982
    MOVSD ES:EDI,ESI                    ; 0049d983
    FLDZ                                ; 0049d984
    FLD float ptr [ESP + 0x24]          ; 0049d986
    FLD float ptr [ESP + 0x28]          ; 0049d98a
    FLD float ptr [ESP + 0x2c]          ; 0049d98e
    LEA EDI,[ESP + 0x18]                ; 0049d992
    LEA ESI,[ESP + 0x48]                ; 0049d996
    FXCH ST2                            ; 0049d99a
    FADD float ptr [ESP + 0x60]         ; 0049d99c
    FXCH                                ; 0049d9a0
    FADD float ptr [ESP + 0x64]         ; 0049d9a2
    FXCH ST2                            ; 0049d9a6
    FADD float ptr [ESP + 0x68]         ; 0049d9a8
    FXCH                                ; 0049d9ac
    FSTP float ptr [ESP + 0x48]         ; 0049d9ae
    FXCH                                ; 0049d9b2
    FSTP float ptr [ESP + 0x4c]         ; 0049d9b4
    FSTP float ptr [ESP + 0x50]         ; 0049d9b8
    MOVSD ES:EDI,ESI                    ; 0049d9bc
    MOVSD ES:EDI,ESI                    ; 0049d9bd
    MOVSD ES:EDI,ESI                    ; 0049d9be
    FCOMPP                              ; 0049d9bf
    FNSTSW AX                           ; 0049d9c1
    SAHF                                ; 0049d9c3
    JNC 0x0049da9e                      ; 0049d9c4
        ;   XREF to: 0049da9e (CONDITIONAL_JUMP)  ; LAB_0049da9e
    PUSH dword ptr [0x005f64fc]         ; 0049d9ca | DAT_005f64fc
    PUSH EBX                            ; 0049d9d0
    MOV ESI,dword ptr [EBP + 0x34]      ; 0049d9d1
    PUSH ESI                            ; 0049d9d4
    MOV EDI,dword ptr [EBP + 0x30]      ; 0049d9d5
    PUSH EDI                            ; 0049d9d8
    MOV EAX,dword ptr [EBP + 0x28]      ; 0049d9d9
    PUSH EAX                            ; 0049d9dc
    PUSH 0x0                            ; 0049d9dd
    LEA EAX,[ESP + 0x30]                ; 0049d9df
    PUSH dword ptr [EBP + 0x20]         ; 0049d9e3
    PUSH EAX                            ; 0049d9e6
    LEA EAX,[ESP + 0x50]                ; 0049d9e7
    PUSH EAX                            ; 0049d9eb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049d9ec
    PUSH EDX                            ; 0049d9ef
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770 ; 0049d9f0
        ;   XREF to: 0049d770 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    LEA EDX,[ESP + 0x40]                ; 0049d9f5
    LEA EAX,[ESP + 0x58]                ; 0049d9f9
    ADD ESP,0x28                        ; 0049d9fd
    CMP EAX,EDX                         ; 0049da00
    JNZ 0x0049da81                      ; 0049da02
        ;   XREF to: 0049da81 (CONDITIONAL_JUMP)  ; LAB_0049da81
    FLDZ                                ; 0049da04
        ;   Label: LAB_0049da04
    FLD float ptr [ESP]                 ; 0049da06
    FXCH                                ; 0049da09
    FMUL ST1                            ; 0049da0b
    FXCH                                ; 0049da0d
    FMUL float ptr [0x005d57e2]         ; 0049da0f | DAT_005d57e2
    FLD float ptr [ESP + 0x3c]          ; 0049da15
    FLD float ptr [ESP + 0x40]          ; 0049da19
    LEA EDI,[ESP + 0xc]                 ; 0049da1d
    FXCH ST3                            ; 0049da21
    FSTP float ptr [ESP + 0x84]         ; 0049da23
    MOV EAX,dword ptr [ESP + 0x84]      ; 0049da2a
    LEA ESI,[ESP + 0x84]                ; 0049da31
    MOV dword ptr [ESP + 0x8c],EAX      ; 0049da38
    FXCH                                ; 0049da3f
    FSTP float ptr [ESP + 0x88]         ; 0049da41
    MOVSD ES:EDI,ESI                    ; 0049da48
    MOVSD ES:EDI,ESI                    ; 0049da49
    MOVSD ES:EDI,ESI                    ; 0049da4a
    FLD float ptr [ESP + 0x44]          ; 0049da4b
    FXCH                                ; 0049da4f
    FADD float ptr [ESP + 0xc]          ; 0049da51
    FXCH ST2                            ; 0049da55
    FADD float ptr [ESP + 0x10]         ; 0049da57
    FXCH                                ; 0049da5b
    FADD float ptr [ESP + 0x14]         ; 0049da5d
    FXCH ST2                            ; 0049da61
    FSTP float ptr [ESP + 0x3c]         ; 0049da63
    FSTP float ptr [ESP + 0x40]         ; 0049da67
    FSTP float ptr [ESP + 0x44]         ; 0049da6b
    JMP 0x0049d88c                      ; 0049da6f
        ;   XREF to: 0049d88c (UNCONDITIONAL_JUMP)  ; LAB_0049d88c
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 0049da74
        ;   Label: LAB_0049da74
    JMP 0x0049d879                      ; 0049da7c
        ;   XREF to: 0049d879 (UNCONDITIONAL_JUMP)  ; LAB_0049d879
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049da81
        ;   Label: LAB_0049da81
    MOV dword ptr [ESP + 0x30],EAX      ; 0049da85
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049da89
    MOV dword ptr [ESP + 0x34],EAX      ; 0049da8d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049da91
    MOV dword ptr [ESP + 0x38],EAX      ; 0049da95
    JMP 0x0049da04                      ; 0049da99
        ;   XREF to: 0049da04 (UNCONDITIONAL_JUMP)  ; LAB_0049da04
    PUSH dword ptr [0x005f64fc]         ; 0049da9e | DAT_005f64fc
        ;   Label: LAB_0049da9e
    PUSH EBX                            ; 0049daa4
    MOV ECX,dword ptr [EBP + 0x34]      ; 0049daa5
    PUSH ECX                            ; 0049daa8
    MOV EBX,dword ptr [EBP + 0x30]      ; 0049daa9
    PUSH EBX                            ; 0049daac
    MOV ESI,dword ptr [EBP + 0x28]      ; 0049daad
    PUSH ESI                            ; 0049dab0
    PUSH dword ptr [EBP + 0x24]         ; 0049dab1
    LEA EAX,[ESP + 0x30]                ; 0049dab4
    PUSH dword ptr [EBP + 0x20]         ; 0049dab8
    PUSH EAX                            ; 0049dabb
    LEA EAX,[ESP + 0x50]                ; 0049dabc
    PUSH EAX                            ; 0049dac0
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049dac1
    PUSH EDI                            ; 0049dac4
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770 ; 0049dac5
        ;   XREF to: 0049d770 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x28                        ; 0049daca
    MOV ESP,EBP                         ; 0049dacd
    POP EBP                             ; 0049dacf
    POP EDI                             ; 0049dad0
    POP ESI                             ; 0049dad1
    POP EBX                             ; 0049dad2
    RET                                 ; 0049dad3

