; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_save_FUN_004b2740(CCrater *this_ptr,_FILE *file_handle)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_save_FUN_004b73f0 at 004b7420
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005df449
;   TerminatedCString s_f_f_f_005df456
;   TerminatedCString s_f_f_f_005df460
;   TerminatedCString s_f_f_f_005df46a
;   TerminatedCString s_f_f_f_005df474
;   TerminatedCString s_f_f_f_005df47e
;   TerminatedCString s_f_f_f_005df488
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2740
        ;   Label: core_fire.cpp_CCrater_save_FUN_004b2740
    PUSH ESI                            ; 004b2741
    PUSH EDI                            ; 004b2742
    PUSH EBP                            ; 004b2743
    MOV EBP,dword ptr [ESP + 0x14]      ; 004b2744
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b2748
    SUB ESP,0x8                         ; 004b274c
    FLD float ptr [EBP + 0x18]          ; 004b274f
    FSTP double ptr [ESP]               ; 004b2752
    SUB ESP,0x8                         ; 004b2755
    FLD float ptr [EBP + 0x8]           ; 004b2758
    FSTP double ptr [ESP]               ; 004b275b
    MOV EDX,dword ptr [EBP + 0x4]       ; 004b275e
    PUSH EDX                            ; 004b2761
    MOV ECX,dword ptr [EBP]             ; 004b2762
    PUSH ECX                            ; 004b2765
    PUSH 0x5df449                       ; 004b2766 | = "%d,%d,%f,%f\n"
    PUSH ESI                            ; 004b276b
    CALL crt_unknown.c_FUN_005c03c0     ; 004b276c
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b2771
    SUB ESP,0x8                         ; 004b2774
    FLD float ptr [EBP + 0x14]          ; 004b2777
    FSTP double ptr [ESP]               ; 004b277a
    SUB ESP,0x8                         ; 004b277d
    FLD float ptr [EBP + 0x10]          ; 004b2780
    FSTP double ptr [ESP]               ; 004b2783
    SUB ESP,0x8                         ; 004b2786
    FLD float ptr [EBP + 0xc]           ; 004b2789
    FSTP double ptr [ESP]               ; 004b278c
    PUSH 0x5df456                       ; 004b278f | = "%f,%f,%f\n"
    PUSH ESI                            ; 004b2794
    MOV EBX,EBP                         ; 004b2795
    LEA EDI,[EBP + 0x24]                ; 004b2797
    CALL crt_unknown.c_FUN_005c03c0     ; 004b279a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b279f
    SUB ESP,0x8                         ; 004b27a2
        ;   Label: LAB_004b27a2
    FLD float ptr [EBX + 0x24]          ; 004b27a5
    FSTP double ptr [ESP]               ; 004b27a8
    SUB ESP,0x8                         ; 004b27ab
    FLD float ptr [EBX + 0x20]          ; 004b27ae
    FSTP double ptr [ESP]               ; 004b27b1
    SUB ESP,0x8                         ; 004b27b4
    FLD float ptr [EBX + 0x1c]          ; 004b27b7
    FSTP double ptr [ESP]               ; 004b27ba
    PUSH 0x5df460                       ; 004b27bd | = "%f,%f,%f\n"
    PUSH ESI                            ; 004b27c2
    ADD EBX,0xc                         ; 004b27c3
    CALL crt_unknown.c_FUN_005c03c0     ; 004b27c6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b27cb
    CMP EBX,EDI                         ; 004b27ce
    JNZ 0x004b27a2                      ; 004b27d0
        ;   XREF to: 004b27a2 (CONDITIONAL_JUMP)  ; LAB_004b27a2
    SUB ESP,0x8                         ; 004b27d2
    FLD float ptr [EBP + 0x48]          ; 004b27d5
    FSTP double ptr [ESP]               ; 004b27d8
    SUB ESP,0x8                         ; 004b27db
    FLD float ptr [EBP + 0x44]          ; 004b27de
    FSTP double ptr [ESP]               ; 004b27e1
    SUB ESP,0x8                         ; 004b27e4
    FLD float ptr [EBP + 0x40]          ; 004b27e7
    FSTP double ptr [ESP]               ; 004b27ea
    PUSH 0x5df46a                       ; 004b27ed | = "%f,%f,%f\n"
    PUSH ESI                            ; 004b27f2
    CALL crt_unknown.c_FUN_005c03c0     ; 004b27f3
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b27f8
    SUB ESP,0x8                         ; 004b27fb
    FLD float ptr [EBP + 0x54]          ; 004b27fe
    FSTP double ptr [ESP]               ; 004b2801
    SUB ESP,0x8                         ; 004b2804
    FLD float ptr [EBP + 0x50]          ; 004b2807
    FSTP double ptr [ESP]               ; 004b280a
    SUB ESP,0x8                         ; 004b280d
    FLD float ptr [EBP + 0x4c]          ; 004b2810
    FSTP double ptr [ESP]               ; 004b2813
    PUSH 0x5df474                       ; 004b2816 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004b281b
    CALL crt_unknown.c_FUN_005c03c0     ; 004b281c
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b2821
    SUB ESP,0x8                         ; 004b2824
    FLD float ptr [EBP + 0x60]          ; 004b2827
    FSTP double ptr [ESP]               ; 004b282a
    SUB ESP,0x8                         ; 004b282d
    FLD float ptr [EBP + 0x5c]          ; 004b2830
    FSTP double ptr [ESP]               ; 004b2833
    SUB ESP,0x8                         ; 004b2836
    FLD float ptr [EBP + 0x58]          ; 004b2839
    FSTP double ptr [ESP]               ; 004b283c
    PUSH 0x5df47e                       ; 004b283f | = "%f,%f,%f\n"
    PUSH ESI                            ; 004b2844
    CALL crt_unknown.c_FUN_005c03c0     ; 004b2845
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b284a
    SUB ESP,0x8                         ; 004b284d
    FLD float ptr [EBP + 0x6c]          ; 004b2850
    FSTP double ptr [ESP]               ; 004b2853
    SUB ESP,0x8                         ; 004b2856
    FLD float ptr [EBP + 0x68]          ; 004b2859
    FSTP double ptr [ESP]               ; 004b285c
    SUB ESP,0x8                         ; 004b285f
    FLD float ptr [EBP + 0x64]          ; 004b2862
    FSTP double ptr [ESP]               ; 004b2865
    PUSH 0x5df488                       ; 004b2868 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004b286d
    CALL crt_unknown.c_FUN_005c03c0     ; 004b286e
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 004b2873
    POP EBP                             ; 004b2876
    POP EDI                             ; 004b2877
    POP ESI                             ; 004b2878
    POP EBX                             ; 004b2879
    RET                                 ; 004b287a

