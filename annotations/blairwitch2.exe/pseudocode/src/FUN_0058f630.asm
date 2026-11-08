; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0058f630(uint param_1)
;
;
; XREF[1]:
;   FUN_004ee960 at 004eeb8d
;
; Referenced Globals:
;   void* PTR_GetKeyNameTextA_005c84b4 = 001c8ade
;   undefined4 DAT_005ee8b8
;   undefined4 DAT_005ee8bc
;   undefined4 DAT_005ee8be
;   undefined4 DAT_005ee8c0
;   undefined4 DAT_005ee8c2
;   undefined4 DAT_005ee8c4
;   undefined4 DAT_005ee8c6
;   undefined4 DAT_005ee8c8
;   undefined4 DAT_005ee8ca
;   undefined4 DAT_005ee8cc
;   undefined4 DAT_005ee8ce
;   undefined4 DAT_005ee8d0
;   undefined4 DAT_005ee8d2
;   TerminatedCString s_BackSpace_005ee8d4
;   ... and 88 more
;
; Called Functions:
;   GetKeyNameTextA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f630
        ;   Label: FUN_0058f630
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058f631
    CMP EBX,0x200                       ; 0058f635
    JL 0x0058f67e                       ; 0058f63b
        ;   XREF to: 0058f67e (CONDITIONAL_JUMP)  ; LAB_0058f67e
    MOV EAX,EBX                         ; 0058f63d
        ;   Label: LAB_0058f63d
    CMP EBX,0x34                        ; 0058f63f
    JNC 0x0058f8ab                      ; 0058f642
        ;   XREF to: 0058f8ab (CONDITIONAL_JUMP)  ; LAB_0058f8ab
    CMP EBX,0x19                        ; 0058f648
    JNC 0x0058fae6                      ; 0058f64b
        ;   XREF to: 0058fae6 (CONDITIONAL_JUMP)  ; LAB_0058fae6
    CMP EBX,0xc                         ; 0058f651
    JNC 0x0058fbd6                      ; 0058f654
        ;   XREF to: 0058fbd6 (CONDITIONAL_JUMP)  ; LAB_0058fbd6
    CMP EBX,0x6                         ; 0058f65a
    JNC 0x0058fc43                      ; 0058f65d
        ;   XREF to: 0058fc43 (CONDITIONAL_JUMP)  ; LAB_0058fc43
    CMP EBX,0x3                         ; 0058f663
    JNC 0x0058fc74                      ; 0058f666
        ;   XREF to: 0058fc74 (CONDITIONAL_JUMP)  ; LAB_0058fc74
    CMP EBX,0x1                         ; 0058f66c
    JC 0x0058f977                       ; 0058f66f
        ;   XREF to: 0058f977 (CONDITIONAL_JUMP)  ; LAB_0058f977
    JA 0x0058f6a5                       ; 0058f675
        ;   XREF to: 0058f6a5 (CONDITIONAL_JUMP)  ; LAB_0058f6a5
    MOV EAX,0x5ee8b8                    ; 0058f677 | DAT_005ee8b8
    POP EBX                             ; 0058f67c
    RET                                 ; 0058f67d
    MOV EAX,EBX                         ; 0058f67e
        ;   Label: LAB_0058f67e
    PUSH 0xc8                           ; 0058f680
    AND EAX,0x1ff                       ; 0058f685
    PUSH 0x2664560                      ; 0058f68a
    SHL EAX,0x10                        ; 0058f68f
    PUSH EAX                            ; 0058f692
    CALL dword ptr CS:[0x5c84b4]        ; 0058f693 | PTR_GetKeyNameTextA_005c84b4
    TEST EAX,EAX                        ; 0058f69a
    JLE 0x0058f63d                      ; 0058f69c
        ;   XREF to: 0058f63d (CONDITIONAL_JUMP)  ; LAB_0058f63d
    MOV EAX,0x2664560                   ; 0058f69e
    POP EBX                             ; 0058f6a3
    RET                                 ; 0058f6a4
    MOV EAX,0x5ee8bc                    ; 0058f6a5 | DAT_005ee8bc
        ;   Label: LAB_0058f6a5
    POP EBX                             ; 0058f6aa
    RET                                 ; 0058f6ab
    MOV EAX,0x5ee8be                    ; 0058f6ac | DAT_005ee8be
        ;   Label: LAB_0058f6ac
    POP EBX                             ; 0058f6b1
    RET                                 ; 0058f6b2
    MOV EAX,0x5ee8c0                    ; 0058f6b3 | DAT_005ee8c0
        ;   Label: LAB_0058f6b3
    POP EBX                             ; 0058f6b8
    RET                                 ; 0058f6b9
    MOV EAX,0x5ee8c4                    ; 0058f6ba | DAT_005ee8c4
        ;   Label: LAB_0058f6ba
    POP EBX                             ; 0058f6bf
    RET                                 ; 0058f6c0
    MOV EAX,0x5ee8c6                    ; 0058f6c1 | DAT_005ee8c6
        ;   Label: LAB_0058f6c1
    POP EBX                             ; 0058f6c6
    RET                                 ; 0058f6c7
    MOV EAX,0x5ee8ca                    ; 0058f6c8 | DAT_005ee8ca
        ;   Label: LAB_0058f6c8
    POP EBX                             ; 0058f6cd
    RET                                 ; 0058f6ce
    MOV EAX,0x5ee8cc                    ; 0058f6cf | DAT_005ee8cc
        ;   Label: LAB_0058f6cf
    POP EBX                             ; 0058f6d4
    RET                                 ; 0058f6d5
    MOV EAX,0x5ee8d0                    ; 0058f6d6 | DAT_005ee8d0
        ;   Label: LAB_0058f6d6
    POP EBX                             ; 0058f6db
    RET                                 ; 0058f6dc
    MOV EAX,0x5ee8d2                    ; 0058f6dd | DAT_005ee8d2
        ;   Label: LAB_0058f6dd
    POP EBX                             ; 0058f6e2
    RET                                 ; 0058f6e3
    MOV EAX,0x5ee8de                    ; 0058f6e4 | DAT_005ee8de
        ;   Label: LAB_0058f6e4
    POP EBX                             ; 0058f6e9
    RET                                 ; 0058f6ea
    MOV EAX,0x5ee8e2                    ; 0058f6eb | DAT_005ee8e2
        ;   Label: LAB_0058f6eb
    POP EBX                             ; 0058f6f0
    RET                                 ; 0058f6f1
    MOV EAX,0x5ee8e6                    ; 0058f6f2 | DAT_005ee8e6
        ;   Label: LAB_0058f6f2
    POP EBX                             ; 0058f6f7
    RET                                 ; 0058f6f8
    MOV EAX,0x5ee8e8                    ; 0058f6f9 | DAT_005ee8e8
        ;   Label: LAB_0058f6f9
    POP EBX                             ; 0058f6fe
    RET                                 ; 0058f6ff
    MOV EAX,0x5ee8ec                    ; 0058f700 | DAT_005ee8ec
        ;   Label: LAB_0058f700
    POP EBX                             ; 0058f705
    RET                                 ; 0058f706
    MOV EAX,0x5ee8ee                    ; 0058f707 | DAT_005ee8ee
        ;   Label: LAB_0058f707
    POP EBX                             ; 0058f70c
    RET                                 ; 0058f70d
    MOV EAX,0x5ee8f0                    ; 0058f70e | DAT_005ee8f0
        ;   Label: LAB_0058f70e
    POP EBX                             ; 0058f713
    RET                                 ; 0058f714
    MOV EAX,0x5ee8f4                    ; 0058f715 | DAT_005ee8f4
        ;   Label: LAB_0058f715
    POP EBX                             ; 0058f71a
    RET                                 ; 0058f71b
    MOV EAX,0x5ee8f6                    ; 0058f71c | DAT_005ee8f6
        ;   Label: LAB_0058f71c
    POP EBX                             ; 0058f721
    RET                                 ; 0058f722
    MOV EAX,0x5ee8fa                    ; 0058f723 | = "Enter"
        ;   Label: LAB_0058f723
    POP EBX                             ; 0058f728
    RET                                 ; 0058f729
    MOV EAX,0x5ee900                    ; 0058f72a | = "LeftCtrl"
        ;   Label: LAB_0058f72a
    POP EBX                             ; 0058f72f
    RET                                 ; 0058f730
    MOV EAX,0x5ee90b                    ; 0058f731 | DAT_005ee90b
        ;   Label: LAB_0058f731
    POP EBX                             ; 0058f736
    RET                                 ; 0058f737
    MOV EAX,0x5ee90d                    ; 0058f738 | DAT_005ee90d
        ;   Label: LAB_0058f738
    POP EBX                             ; 0058f73d
    RET                                 ; 0058f73e
    MOV EAX,0x5ee911                    ; 0058f73f | DAT_005ee911
        ;   Label: LAB_0058f73f
    POP EBX                             ; 0058f744
    RET                                 ; 0058f745
    MOV EAX,0x5ee913                    ; 0058f746 | DAT_005ee913
        ;   Label: LAB_0058f746
    POP EBX                             ; 0058f74b
    RET                                 ; 0058f74c
    MOV EAX,0x5ee915                    ; 0058f74d | DAT_005ee915
        ;   Label: LAB_0058f74d
    POP EBX                             ; 0058f752
    RET                                 ; 0058f753
    MOV EAX,0x5ee919                    ; 0058f754 | DAT_005ee919
        ;   Label: LAB_0058f754
    POP EBX                             ; 0058f759
    RET                                 ; 0058f75a
    MOV EAX,0x5ee91b                    ; 0058f75b | DAT_005ee91b
        ;   Label: LAB_0058f75b
    POP EBX                             ; 0058f760
    RET                                 ; 0058f761
    MOV EAX,0x5ee91f                    ; 0058f762 | DAT_005ee91f
        ;   Label: LAB_0058f762
    POP EBX                             ; 0058f767
    RET                                 ; 0058f768
    MOV EAX,0x5ee921                    ; 0058f769 | = "LeftShift"
        ;   Label: LAB_0058f769
    POP EBX                             ; 0058f76e
    RET                                 ; 0058f76f
    MOV EAX,0x5ee92b                    ; 0058f770 | DAT_005ee92b
        ;   Label: LAB_0058f770
    POP EBX                             ; 0058f775
    RET                                 ; 0058f776
    MOV EAX,0x5ee92d                    ; 0058f777 | DAT_005ee92d
        ;   Label: LAB_0058f777
    POP EBX                             ; 0058f77c
    RET                                 ; 0058f77d
    MOV EAX,0x5ee92f                    ; 0058f77e | DAT_005ee92f
        ;   Label: LAB_0058f77e
    POP EBX                             ; 0058f783
    RET                                 ; 0058f784
    MOV EAX,0x5ee933                    ; 0058f785 | DAT_005ee933
        ;   Label: LAB_0058f785
    POP EBX                             ; 0058f78a
    RET                                 ; 0058f78b
    MOV EAX,0x5ee935                    ; 0058f78c | DAT_005ee935
        ;   Label: LAB_0058f78c
    POP EBX                             ; 0058f791
    RET                                 ; 0058f792
    MOV EAX,0x5ee937                    ; 0058f793 | DAT_005ee937
        ;   Label: LAB_0058f793
    POP EBX                             ; 0058f798
    RET                                 ; 0058f799
    MOV EAX,0x5ee93b                    ; 0058f79a | DAT_005ee93b
        ;   Label: LAB_0058f79a
    POP EBX                             ; 0058f79f
    RET                                 ; 0058f7a0
    MOV EAX,0x5ee93d                    ; 0058f7a1 | DAT_005ee93d
        ;   Label: LAB_0058f7a1
    POP EBX                             ; 0058f7a6
    RET                                 ; 0058f7a7
    MOV EAX,0x5ee94a                    ; 0058f7a8 | = "NumPad*"
        ;   Label: LAB_0058f7a8
    POP EBX                             ; 0058f7ad
    RET                                 ; 0058f7ae
    MOV EAX,0x5ee952                    ; 0058f7af | = "LeftAlt"
        ;   Label: LAB_0058f7af
    POP EBX                             ; 0058f7b4
    RET                                 ; 0058f7b5
    MOV EAX,0x5ee960                    ; 0058f7b6 | = "CapsLock"
        ;   Label: LAB_0058f7b6
    POP EBX                             ; 0058f7bb
    RET                                 ; 0058f7bc
    MOV EAX,0x5ee969                    ; 0058f7bd | DAT_005ee969
        ;   Label: LAB_0058f7bd
    POP EBX                             ; 0058f7c2
    RET                                 ; 0058f7c3
    MOV EAX,0x5ee96f                    ; 0058f7c4 | DAT_005ee96f
        ;   Label: LAB_0058f7c4
    POP EBX                             ; 0058f7c9
    RET                                 ; 0058f7ca
    MOV EAX,0x5ee972                    ; 0058f7cb | DAT_005ee972
        ;   Label: LAB_0058f7cb
    POP EBX                             ; 0058f7d0
    RET                                 ; 0058f7d1
    MOV EAX,0x5ee978                    ; 0058f7d2 | DAT_005ee978
        ;   Label: LAB_0058f7d2
    POP EBX                             ; 0058f7d7
    RET                                 ; 0058f7d8
    MOV EAX,0x5ee97b                    ; 0058f7d9 | DAT_005ee97b
        ;   Label: LAB_0058f7d9
    POP EBX                             ; 0058f7de
    RET                                 ; 0058f7df
    MOV EAX,0x5ee981                    ; 0058f7e0 | DAT_005ee981
        ;   Label: LAB_0058f7e0
    POP EBX                             ; 0058f7e5
    RET                                 ; 0058f7e6
    MOV EAX,0x5ee984                    ; 0058f7e7 | DAT_005ee984
        ;   Label: LAB_0058f7e7
    POP EBX                             ; 0058f7ec
    RET                                 ; 0058f7ed
    MOV EAX,0x5ee98e                    ; 0058f7ee | = "ScrollLock"
        ;   Label: LAB_0058f7ee
    POP EBX                             ; 0058f7f3
    RET                                 ; 0058f7f4
    MOV EAX,0x5ee999                    ; 0058f7f5 | = "NumPad7"
        ;   Label: LAB_0058f7f5
    POP EBX                             ; 0058f7fa
    RET                                 ; 0058f7fb
    MOV EAX,0x5ee9a9                    ; 0058f7fc | = "NumPad9"
        ;   Label: LAB_0058f7fc
    POP EBX                             ; 0058f801
    RET                                 ; 0058f802
    MOV EAX,0x5ee9b1                    ; 0058f803 | = "NumPad-"
        ;   Label: LAB_0058f803
    POP EBX                             ; 0058f808
    RET                                 ; 0058f809
    MOV EAX,0x5ee9b9                    ; 0058f80a | = "NumPad4"
        ;   Label: LAB_0058f80a
    POP EBX                             ; 0058f80f
    RET                                 ; 0058f810
    MOV EAX,0x5ee9c9                    ; 0058f811 | = "NumPad6"
        ;   Label: LAB_0058f811
    POP EBX                             ; 0058f816
    RET                                 ; 0058f817
    MOV EAX,0x5ee9d1                    ; 0058f818 | = "NumPad+"
        ;   Label: LAB_0058f818
    POP EBX                             ; 0058f81d
    RET                                 ; 0058f81e
    MOV EAX,0x5ee9e1                    ; 0058f81f | = "NumPad2"
        ;   Label: LAB_0058f81f
    POP EBX                             ; 0058f824
    RET                                 ; 0058f825
    MOV EAX,0x5ee9e9                    ; 0058f826 | = "NumPad3"
        ;   Label: LAB_0058f826
    POP EBX                             ; 0058f82b
    RET                                 ; 0058f82c
    MOV EAX,0x5ee9f9                    ; 0058f82d | = "NumPad."
        ;   Label: LAB_0058f82d
    POP EBX                             ; 0058f832
    RET                                 ; 0058f833
    MOV EAX,0x5eea01                    ; 0058f834 | DAT_005eea01
        ;   Label: LAB_0058f834
    POP EBX                             ; 0058f839
    RET                                 ; 0058f83a
    MOV EAX,0x5eea05                    ; 0058f83b | DAT_005eea05
        ;   Label: LAB_0058f83b
    POP EBX                             ; 0058f840
    RET                                 ; 0058f841
    MOV EAX,0x5eea09                    ; 0058f842 | = "NumPadEnter"
        ;   Label: LAB_0058f842
    POP EBX                             ; 0058f847
    RET                                 ; 0058f848
    MOV EAX,0x5eea15                    ; 0058f849 | = "RightCtrl"
        ;   Label: LAB_0058f849
    POP EBX                             ; 0058f84e
    RET                                 ; 0058f84f
    MOV EAX,0x5eea1f                    ; 0058f850 | = "NumPad/"
        ;   Label: LAB_0058f850
    POP EBX                             ; 0058f855
    RET                                 ; 0058f856
    MOV EAX,0x5eea27                    ; 0058f857 | = "RightAlt"
        ;   Label: LAB_0058f857
    POP EBX                             ; 0058f85c
    RET                                 ; 0058f85d
    MOV EAX,0x5eea30                    ; 0058f85e | = "NumLock"
        ;   Label: LAB_0058f85e
    POP EBX                             ; 0058f863
    RET                                 ; 0058f864
    MOV EAX,0x5eea38                    ; 0058f865 | DAT_005eea38
        ;   Label: LAB_0058f865
    POP EBX                             ; 0058f86a
    RET                                 ; 0058f86b
    MOV EAX,0x5eea40                    ; 0058f86c | DAT_005eea40
        ;   Label: LAB_0058f86c
    POP EBX                             ; 0058f871
    RET                                 ; 0058f872
    MOV EAX,0x5eea45                    ; 0058f873 | DAT_005eea45
        ;   Label: LAB_0058f873
    POP EBX                             ; 0058f878
    RET                                 ; 0058f879
    MOV EAX,0x5eea4a                    ; 0058f87a | = "Right"
        ;   Label: LAB_0058f87a
    POP EBX                             ; 0058f87f
    RET                                 ; 0058f880
    MOV EAX,0x5eea50                    ; 0058f881 | DAT_005eea50
        ;   Label: LAB_0058f881
    POP EBX                             ; 0058f886
    RET                                 ; 0058f887
    MOV EAX,0x5eea54                    ; 0058f888 | DAT_005eea54
        ;   Label: LAB_0058f888
    POP EBX                             ; 0058f88d
    RET                                 ; 0058f88e
    MOV EAX,0x5eea5e                    ; 0058f88f | DAT_005eea5e
        ;   Label: LAB_0058f88f
    POP EBX                             ; 0058f894
    RET                                 ; 0058f895
    MOV EAX,0x5eea62                    ; 0058f896 | DAT_005eea62
        ;   Label: LAB_0058f896
    POP EBX                             ; 0058f89b
    RET                                 ; 0058f89c
    MOV EAX,0x5eea66                    ; 0058f89d | = "Left Mouse Button"
        ;   Label: LAB_0058f89d
    POP EBX                             ; 0058f8a2
    RET                                 ; 0058f8a3
    MOV EAX,0x5eea78                    ; 0058f8a4 | = "Right Mouse Button"
        ;   Label: LAB_0058f8a4
    POP EBX                             ; 0058f8a9
    RET                                 ; 0058f8aa
    JBE 0x0058f79a                      ; 0058f8ab
        ;   XREF to: 0058f79a (CONDITIONAL_JUMP)  ; LAB_0058f79a
        ;   Label: LAB_0058f8ab
    CMP EBX,0x4d                        ; 0058f8b1
    JNC 0x0058f8e1                      ; 0058f8b4
        ;   XREF to: 0058f8e1 (CONDITIONAL_JUMP)  ; LAB_0058f8e1
    CMP EBX,0x40                        ; 0058f8b6
    JNC 0x0058fa32                      ; 0058f8b9
        ;   XREF to: 0058fa32 (CONDITIONAL_JUMP)  ; LAB_0058fa32
    CMP EBX,0x3a                        ; 0058f8bf
    JNC 0x0058fa9f                      ; 0058f8c2
        ;   XREF to: 0058fa9f (CONDITIONAL_JUMP)  ; LAB_0058fa9f
    CMP EBX,0x37                        ; 0058f8c8
    JNC 0x0058fad0                      ; 0058f8cb
        ;   XREF to: 0058fad0 (CONDITIONAL_JUMP)  ; LAB_0058fad0
    CMP EBX,0x35                        ; 0058f8d1
    JBE 0x0058f7a1                      ; 0058f8d4
        ;   XREF to: 0058f7a1 (CONDITIONAL_JUMP)  ; LAB_0058f7a1
    MOV EAX,0x5ee93f                    ; 0058f8da | = "RightShift"
    POP EBX                             ; 0058f8df
    RET                                 ; 0058f8e0
    JBE 0x0058f811                      ; 0058f8e1
        ;   XREF to: 0058f811 (CONDITIONAL_JUMP)  ; LAB_0058f811
        ;   Label: LAB_0058f8e1
    CMP EBX,0x145                       ; 0058f8e7
    JNC 0x0058f911                      ; 0058f8ed
        ;   XREF to: 0058f911 (CONDITIONAL_JUMP)  ; LAB_0058f911
    CMP EBX,0x53                        ; 0058f8ef
    JNC 0x0058f9b9                      ; 0058f8f2
        ;   XREF to: 0058f9b9 (CONDITIONAL_JUMP)  ; LAB_0058f9b9
    CMP EBX,0x50                        ; 0058f8f8
    JNC 0x0058fa1c                      ; 0058f8fb
        ;   XREF to: 0058fa1c (CONDITIONAL_JUMP)  ; LAB_0058fa1c
    CMP EBX,0x4e                        ; 0058f901
    JBE 0x0058f818                      ; 0058f904
        ;   XREF to: 0058f818 (CONDITIONAL_JUMP)  ; LAB_0058f818
    MOV EAX,0x5ee9d9                    ; 0058f90a | = "NumPad1"
    POP EBX                             ; 0058f90f
    RET                                 ; 0058f910
    JBE 0x0058f85e                      ; 0058f911
        ;   XREF to: 0058f85e (CONDITIONAL_JUMP)  ; LAB_0058f85e
        ;   Label: LAB_0058f911
    CMP EBX,0x14f                       ; 0058f917
    JNC 0x0058f93c                      ; 0058f91d
        ;   XREF to: 0058f93c (CONDITIONAL_JUMP)  ; LAB_0058f93c
    CMP EBX,0x149                       ; 0058f91f
    JNC 0x0058f992                      ; 0058f925
        ;   XREF to: 0058f992 (CONDITIONAL_JUMP)  ; LAB_0058f992
    CMP EBX,0x147                       ; 0058f927
    JC 0x0058f977                       ; 0058f92d
        ;   XREF to: 0058f977 (CONDITIONAL_JUMP)  ; LAB_0058f977
    JBE 0x0058f865                      ; 0058f92f
        ;   XREF to: 0058f865 (CONDITIONAL_JUMP)  ; LAB_0058f865
    MOV EAX,0x5eea3d                    ; 0058f935 | DAT_005eea3d
    POP EBX                             ; 0058f93a
    RET                                 ; 0058f93b
    JBE 0x0058f881                      ; 0058f93c
        ;   XREF to: 0058f881 (CONDITIONAL_JUMP)  ; LAB_0058f881
        ;   Label: LAB_0058f93c
    CMP EBX,0x152                       ; 0058f942
    JNC 0x0058f95d                      ; 0058f948
        ;   XREF to: 0058f95d (CONDITIONAL_JUMP)  ; LAB_0058f95d
    CMP EBX,0x150                       ; 0058f94a
    JBE 0x0058f888                      ; 0058f950
        ;   XREF to: 0058f888 (CONDITIONAL_JUMP)  ; LAB_0058f888
    MOV EAX,0x5eea59                    ; 0058f956 | DAT_005eea59
    POP EBX                             ; 0058f95b
    RET                                 ; 0058f95c
    JBE 0x0058f88f                      ; 0058f95d
        ;   XREF to: 0058f88f (CONDITIONAL_JUMP)  ; LAB_0058f88f
        ;   Label: LAB_0058f95d
    CMP EBX,0x200                       ; 0058f963
    JNC 0x0058f97e                      ; 0058f969
        ;   XREF to: 0058f97e (CONDITIONAL_JUMP)  ; LAB_0058f97e
    CMP EBX,0x153                       ; 0058f96b
    JZ 0x0058f896                       ; 0058f971
        ;   XREF to: 0058f896 (CONDITIONAL_JUMP)  ; LAB_0058f896
    MOV EAX,0x5eea8b                    ; 0058f977 | = "(invalid key)"
        ;   Label: LAB_0058f977
    POP EBX                             ; 0058f97c
    RET                                 ; 0058f97d
    JBE 0x0058f89d                      ; 0058f97e
        ;   XREF to: 0058f89d (CONDITIONAL_JUMP)  ; LAB_0058f89d
        ;   Label: LAB_0058f97e
    CMP EBX,0x201                       ; 0058f984
    JZ 0x0058f8a4                       ; 0058f98a
        ;   XREF to: 0058f8a4 (CONDITIONAL_JUMP)  ; LAB_0058f8a4
    JMP 0x0058f977                      ; 0058f990
        ;   XREF to: 0058f977 (UNCONDITIONAL_JUMP)  ; LAB_0058f977
    JBE 0x0058f86c                      ; 0058f992
        ;   XREF to: 0058f86c (CONDITIONAL_JUMP)  ; LAB_0058f86c
        ;   Label: LAB_0058f992
    CMP EBX,0x14b                       ; 0058f998
    JC 0x0058f977                       ; 0058f99e
        ;   XREF to: 0058f977 (CONDITIONAL_JUMP)  ; LAB_0058f977
    JBE 0x0058f873                      ; 0058f9a0
        ;   XREF to: 0058f873 (CONDITIONAL_JUMP)  ; LAB_0058f873
    CMP EBX,0x14d                       ; 0058f9a6
    JZ 0x0058f87a                       ; 0058f9ac
        ;   XREF to: 0058f87a (CONDITIONAL_JUMP)  ; LAB_0058f87a
    MOV EAX,0x5eea8b                    ; 0058f9b2 | = "(invalid key)"
    POP EBX                             ; 0058f9b7
    RET                                 ; 0058f9b8
    JBE 0x0058f82d                      ; 0058f9b9
        ;   XREF to: 0058f82d (CONDITIONAL_JUMP)  ; LAB_0058f82d
        ;   Label: LAB_0058f9b9
    CMP EBX,0x11c                       ; 0058f9bf
    JNC 0x0058f9e2                      ; 0058f9c5
        ;   XREF to: 0058f9e2 (CONDITIONAL_JUMP)  ; LAB_0058f9e2
    CMP EBX,0x57                        ; 0058f9c7
    JC 0x0058f977                       ; 0058f9ca
        ;   XREF to: 0058f977 (CONDITIONAL_JUMP)  ; LAB_0058f977
    JBE 0x0058f834                      ; 0058f9cc
        ;   XREF to: 0058f834 (CONDITIONAL_JUMP)  ; LAB_0058f834
    CMP EBX,0x58                        ; 0058f9d2
    JZ 0x0058f83b                       ; 0058f9d5
        ;   XREF to: 0058f83b (CONDITIONAL_JUMP)  ; LAB_0058f83b
    MOV EAX,0x5eea8b                    ; 0058f9db | = "(invalid key)"
    POP EBX                             ; 0058f9e0
    RET                                 ; 0058f9e1
    JBE 0x0058f842                      ; 0058f9e2
        ;   XREF to: 0058f842 (CONDITIONAL_JUMP)  ; LAB_0058f842
        ;   Label: LAB_0058f9e2
    CMP EBX,0x135                       ; 0058f9e8
    JNC 0x0058fa03                      ; 0058f9ee
        ;   XREF to: 0058fa03 (CONDITIONAL_JUMP)  ; LAB_0058fa03
    CMP EBX,0x11d                       ; 0058f9f0
    JZ 0x0058f849                       ; 0058f9f6
        ;   XREF to: 0058f849 (CONDITIONAL_JUMP)  ; LAB_0058f849
    MOV EAX,0x5eea8b                    ; 0058f9fc | = "(invalid key)"
    POP EBX                             ; 0058fa01
    RET                                 ; 0058fa02
    JBE 0x0058f850                      ; 0058fa03
        ;   XREF to: 0058f850 (CONDITIONAL_JUMP)  ; LAB_0058f850
        ;   Label: LAB_0058fa03
    CMP EBX,0x138                       ; 0058fa09
    JZ 0x0058f857                       ; 0058fa0f
        ;   XREF to: 0058f857 (CONDITIONAL_JUMP)  ; LAB_0058f857
    MOV EAX,0x5eea8b                    ; 0058fa15 | = "(invalid key)"
    POP EBX                             ; 0058fa1a
    RET                                 ; 0058fa1b
    JBE 0x0058f81f                      ; 0058fa1c
        ;   XREF to: 0058f81f (CONDITIONAL_JUMP)  ; LAB_0058f81f
        ;   Label: LAB_0058fa1c
    CMP EBX,0x51                        ; 0058fa22
    JBE 0x0058f826                      ; 0058fa25
        ;   XREF to: 0058f826 (CONDITIONAL_JUMP)  ; LAB_0058f826
    MOV EAX,0x5ee9f1                    ; 0058fa2b | = "NumPad0"
    POP EBX                             ; 0058fa30
    RET                                 ; 0058fa31
    JBE 0x0058f7d2                      ; 0058fa32
        ;   XREF to: 0058f7d2 (CONDITIONAL_JUMP)  ; LAB_0058f7d2
        ;   Label: LAB_0058fa32
    CMP EBX,0x46                        ; 0058fa38
    JNC 0x0058fa52                      ; 0058fa3b
        ;   XREF to: 0058fa52 (CONDITIONAL_JUMP)  ; LAB_0058fa52
    CMP EBX,0x43                        ; 0058fa3d
    JNC 0x0058fa89                      ; 0058fa40
        ;   XREF to: 0058fa89 (CONDITIONAL_JUMP)  ; LAB_0058fa89
    CMP EBX,0x41                        ; 0058fa42
    JBE 0x0058f7d9                      ; 0058fa45
        ;   XREF to: 0058f7d9 (CONDITIONAL_JUMP)  ; LAB_0058f7d9
    MOV EAX,0x5ee97e                    ; 0058fa4b | DAT_005ee97e
    POP EBX                             ; 0058fa50
    RET                                 ; 0058fa51
    JBE 0x0058f7ee                      ; 0058fa52
        ;   XREF to: 0058f7ee (CONDITIONAL_JUMP)  ; LAB_0058f7ee
        ;   Label: LAB_0058fa52
    CMP EBX,0x49                        ; 0058fa58
    JNC 0x0058fa6d                      ; 0058fa5b
        ;   XREF to: 0058fa6d (CONDITIONAL_JUMP)  ; LAB_0058fa6d
    CMP EBX,0x47                        ; 0058fa5d
    JBE 0x0058f7f5                      ; 0058fa60
        ;   XREF to: 0058f7f5 (CONDITIONAL_JUMP)  ; LAB_0058f7f5
    MOV EAX,0x5ee9a1                    ; 0058fa66 | = "NumPad8"
    POP EBX                             ; 0058fa6b
    RET                                 ; 0058fa6c
    JBE 0x0058f7fc                      ; 0058fa6d
        ;   XREF to: 0058f7fc (CONDITIONAL_JUMP)  ; LAB_0058f7fc
        ;   Label: LAB_0058fa6d
    CMP EBX,0x4b                        ; 0058fa73
    JC 0x0058f803                       ; 0058fa76
        ;   XREF to: 0058f803 (CONDITIONAL_JUMP)  ; LAB_0058f803
    JBE 0x0058f80a                      ; 0058fa7c
        ;   XREF to: 0058f80a (CONDITIONAL_JUMP)  ; LAB_0058f80a
    MOV EAX,0x5ee9c1                    ; 0058fa82 | = "NumPad5"
    POP EBX                             ; 0058fa87
    RET                                 ; 0058fa88
    JBE 0x0058f7e0                      ; 0058fa89
        ;   XREF to: 0058f7e0 (CONDITIONAL_JUMP)  ; LAB_0058f7e0
        ;   Label: LAB_0058fa89
    CMP EBX,0x44                        ; 0058fa8f
    JBE 0x0058f7e7                      ; 0058fa92
        ;   XREF to: 0058f7e7 (CONDITIONAL_JUMP)  ; LAB_0058f7e7
    MOV EAX,0x5ee988                    ; 0058fa98 | = "Pause"
    POP EBX                             ; 0058fa9d
    RET                                 ; 0058fa9e
    JBE 0x0058f7b6                      ; 0058fa9f
        ;   XREF to: 0058f7b6 (CONDITIONAL_JUMP)  ; LAB_0058f7b6
        ;   Label: LAB_0058fa9f
    CMP EBX,0x3d                        ; 0058faa5
    JNC 0x0058faba                      ; 0058faa8
        ;   XREF to: 0058faba (CONDITIONAL_JUMP)  ; LAB_0058faba
    CMP EBX,0x3b                        ; 0058faaa
    JBE 0x0058f7bd                      ; 0058faad
        ;   XREF to: 0058f7bd (CONDITIONAL_JUMP)  ; LAB_0058f7bd
    MOV EAX,0x5ee96c                    ; 0058fab3 | DAT_005ee96c
    POP EBX                             ; 0058fab8
    RET                                 ; 0058fab9
    JBE 0x0058f7c4                      ; 0058faba
        ;   XREF to: 0058f7c4 (CONDITIONAL_JUMP)  ; LAB_0058f7c4
        ;   Label: LAB_0058faba
    CMP EBX,0x3e                        ; 0058fac0
    JBE 0x0058f7cb                      ; 0058fac3
        ;   XREF to: 0058f7cb (CONDITIONAL_JUMP)  ; LAB_0058f7cb
    MOV EAX,0x5ee975                    ; 0058fac9 | DAT_005ee975
    POP EBX                             ; 0058face
    RET                                 ; 0058facf
    JBE 0x0058f7a8                      ; 0058fad0
        ;   XREF to: 0058f7a8 (CONDITIONAL_JUMP)  ; LAB_0058f7a8
        ;   Label: LAB_0058fad0
    CMP EBX,0x38                        ; 0058fad6
    JBE 0x0058f7af                      ; 0058fad9
        ;   XREF to: 0058f7af (CONDITIONAL_JUMP)  ; LAB_0058f7af
    MOV EAX,0x5ee95a                    ; 0058fadf | = "Space"
    POP EBX                             ; 0058fae4
    RET                                 ; 0058fae5
    JBE 0x0058f715                      ; 0058fae6
        ;   XREF to: 0058f715 (CONDITIONAL_JUMP)  ; LAB_0058f715
        ;   Label: LAB_0058fae6
    CMP EBX,0x26                        ; 0058faec
    JNC 0x0058fb13                      ; 0058faef
        ;   XREF to: 0058fb13 (CONDITIONAL_JUMP)  ; LAB_0058fb13
    CMP EBX,0x1f                        ; 0058faf1
    JNC 0x0058fb89                      ; 0058faf4
        ;   XREF to: 0058fb89 (CONDITIONAL_JUMP)  ; LAB_0058fb89
    CMP EBX,0x1c                        ; 0058fafa
    JNC 0x0058fbc0                      ; 0058fafd
        ;   XREF to: 0058fbc0 (CONDITIONAL_JUMP)  ; LAB_0058fbc0
    CMP EBX,0x1a                        ; 0058fb03
    JBE 0x0058f71c                      ; 0058fb06
        ;   XREF to: 0058f71c (CONDITIONAL_JUMP)  ; LAB_0058f71c
    MOV EAX,0x5ee8f8                    ; 0058fb0c | DAT_005ee8f8
    POP EBX                             ; 0058fb11
    RET                                 ; 0058fb12
    JBE 0x0058f754                      ; 0058fb13
        ;   XREF to: 0058f754 (CONDITIONAL_JUMP)  ; LAB_0058f754
        ;   Label: LAB_0058fb13
    CMP EBX,0x2d                        ; 0058fb19
    JNC 0x0058fb33                      ; 0058fb1c
        ;   XREF to: 0058fb33 (CONDITIONAL_JUMP)  ; LAB_0058fb33
    CMP EBX,0x29                        ; 0058fb1e
    JNC 0x0058fb6a                      ; 0058fb21
        ;   XREF to: 0058fb6a (CONDITIONAL_JUMP)  ; LAB_0058fb6a
    CMP EBX,0x27                        ; 0058fb23
    JBE 0x0058f75b                      ; 0058fb26
        ;   XREF to: 0058f75b (CONDITIONAL_JUMP)  ; LAB_0058f75b
    MOV EAX,0x5ee91d                    ; 0058fb2c | DAT_005ee91d
    POP EBX                             ; 0058fb31
    RET                                 ; 0058fb32
    JBE 0x0058f777                      ; 0058fb33
        ;   XREF to: 0058f777 (CONDITIONAL_JUMP)  ; LAB_0058f777
        ;   Label: LAB_0058fb33
    CMP EBX,0x30                        ; 0058fb39
    JNC 0x0058fb4e                      ; 0058fb3c
        ;   XREF to: 0058fb4e (CONDITIONAL_JUMP)  ; LAB_0058fb4e
    CMP EBX,0x2e                        ; 0058fb3e
    JBE 0x0058f77e                      ; 0058fb41
        ;   XREF to: 0058f77e (CONDITIONAL_JUMP)  ; LAB_0058f77e
    MOV EAX,0x5ee931                    ; 0058fb47 | DAT_005ee931
    POP EBX                             ; 0058fb4c
    RET                                 ; 0058fb4d
    JBE 0x0058f785                      ; 0058fb4e
        ;   XREF to: 0058f785 (CONDITIONAL_JUMP)  ; LAB_0058f785
        ;   Label: LAB_0058fb4e
    CMP EBX,0x32                        ; 0058fb54
    JC 0x0058f78c                       ; 0058fb57
        ;   XREF to: 0058f78c (CONDITIONAL_JUMP)  ; LAB_0058f78c
    JBE 0x0058f793                      ; 0058fb5d
        ;   XREF to: 0058f793 (CONDITIONAL_JUMP)  ; LAB_0058f793
    MOV EAX,0x5ee939                    ; 0058fb63 | DAT_005ee939
    POP EBX                             ; 0058fb68
    RET                                 ; 0058fb69
    JBE 0x0058f762                      ; 0058fb6a
        ;   XREF to: 0058f762 (CONDITIONAL_JUMP)  ; LAB_0058f762
        ;   Label: LAB_0058fb6a
    CMP EBX,0x2a                        ; 0058fb70
    JBE 0x0058f769                      ; 0058fb73
        ;   XREF to: 0058f769 (CONDITIONAL_JUMP)  ; LAB_0058f769
    CMP EBX,0x2c                        ; 0058fb79
    JZ 0x0058f770                       ; 0058fb7c
        ;   XREF to: 0058f770 (CONDITIONAL_JUMP)  ; LAB_0058f770
    MOV EAX,0x5eea8b                    ; 0058fb82 | = "(invalid key)"
    POP EBX                             ; 0058fb87
    RET                                 ; 0058fb88
    JBE 0x0058f731                      ; 0058fb89
        ;   XREF to: 0058f731 (CONDITIONAL_JUMP)  ; LAB_0058f731
        ;   Label: LAB_0058fb89
    CMP EBX,0x22                        ; 0058fb8f
    JNC 0x0058fba4                      ; 0058fb92
        ;   XREF to: 0058fba4 (CONDITIONAL_JUMP)  ; LAB_0058fba4
    CMP EBX,0x20                        ; 0058fb94
    JBE 0x0058f738                      ; 0058fb97
        ;   XREF to: 0058f738 (CONDITIONAL_JUMP)  ; LAB_0058f738
    MOV EAX,0x5ee90f                    ; 0058fb9d | DAT_005ee90f
    POP EBX                             ; 0058fba2
    RET                                 ; 0058fba3
    JBE 0x0058f73f                      ; 0058fba4
        ;   XREF to: 0058f73f (CONDITIONAL_JUMP)  ; LAB_0058f73f
        ;   Label: LAB_0058fba4
    CMP EBX,0x24                        ; 0058fbaa
    JC 0x0058f746                       ; 0058fbad
        ;   XREF to: 0058f746 (CONDITIONAL_JUMP)  ; LAB_0058f746
    JBE 0x0058f74d                      ; 0058fbb3
        ;   XREF to: 0058f74d (CONDITIONAL_JUMP)  ; LAB_0058f74d
    MOV EAX,0x5ee917                    ; 0058fbb9 | DAT_005ee917
    POP EBX                             ; 0058fbbe
    RET                                 ; 0058fbbf
    JBE 0x0058f723                      ; 0058fbc0
        ;   XREF to: 0058f723 (CONDITIONAL_JUMP)  ; LAB_0058f723
        ;   Label: LAB_0058fbc0
    CMP EBX,0x1d                        ; 0058fbc6
    JBE 0x0058f72a                      ; 0058fbc9
        ;   XREF to: 0058f72a (CONDITIONAL_JUMP)  ; LAB_0058f72a
    MOV EAX,0x5ee909                    ; 0058fbcf | DAT_005ee909
    POP EBX                             ; 0058fbd4
    RET                                 ; 0058fbd5
    JBE 0x0058f6d6                      ; 0058fbd6
        ;   XREF to: 0058f6d6 (CONDITIONAL_JUMP)  ; LAB_0058f6d6
        ;   Label: LAB_0058fbd6
    CMP EBX,0x12                        ; 0058fbdc
    JNC 0x0058fbf6                      ; 0058fbdf
        ;   XREF to: 0058fbf6 (CONDITIONAL_JUMP)  ; LAB_0058fbf6
    CMP EBX,0xf                         ; 0058fbe1
    JNC 0x0058fc2d                      ; 0058fbe4
        ;   XREF to: 0058fc2d (CONDITIONAL_JUMP)  ; LAB_0058fc2d
    CMP EBX,0xd                         ; 0058fbe6
    JBE 0x0058f6dd                      ; 0058fbe9
        ;   XREF to: 0058f6dd (CONDITIONAL_JUMP)  ; LAB_0058f6dd
    MOV EAX,0x5ee8d4                    ; 0058fbef | = "BackSpace"
    POP EBX                             ; 0058fbf4
    RET                                 ; 0058fbf5
    JBE 0x0058f6f2                      ; 0058fbf6
        ;   XREF to: 0058f6f2 (CONDITIONAL_JUMP)  ; LAB_0058f6f2
        ;   Label: LAB_0058fbf6
    CMP EBX,0x15                        ; 0058fbfc
    JNC 0x0058fc11                      ; 0058fbff
        ;   XREF to: 0058fc11 (CONDITIONAL_JUMP)  ; LAB_0058fc11
    CMP EBX,0x13                        ; 0058fc01
    JBE 0x0058f6f9                      ; 0058fc04
        ;   XREF to: 0058f6f9 (CONDITIONAL_JUMP)  ; LAB_0058f6f9
    MOV EAX,0x5ee8ea                    ; 0058fc0a | DAT_005ee8ea
    POP EBX                             ; 0058fc0f
    RET                                 ; 0058fc10
    JBE 0x0058f700                      ; 0058fc11
        ;   XREF to: 0058f700 (CONDITIONAL_JUMP)  ; LAB_0058f700
        ;   Label: LAB_0058fc11
    CMP EBX,0x17                        ; 0058fc17
    JC 0x0058f707                       ; 0058fc1a
        ;   XREF to: 0058f707 (CONDITIONAL_JUMP)  ; LAB_0058f707
    JBE 0x0058f70e                      ; 0058fc20
        ;   XREF to: 0058f70e (CONDITIONAL_JUMP)  ; LAB_0058f70e
    MOV EAX,0x5ee8f2                    ; 0058fc26 | DAT_005ee8f2
    POP EBX                             ; 0058fc2b
    RET                                 ; 0058fc2c
    JBE 0x0058f6e4                      ; 0058fc2d
        ;   XREF to: 0058f6e4 (CONDITIONAL_JUMP)  ; LAB_0058f6e4
        ;   Label: LAB_0058fc2d
    CMP EBX,0x10                        ; 0058fc33
    JBE 0x0058f6eb                      ; 0058fc36
        ;   XREF to: 0058f6eb (CONDITIONAL_JUMP)  ; LAB_0058f6eb
    MOV EAX,0x5ee8e4                    ; 0058fc3c | DAT_005ee8e4
    POP EBX                             ; 0058fc41
    RET                                 ; 0058fc42
    JBE 0x0058f6ba                      ; 0058fc43
        ;   XREF to: 0058f6ba (CONDITIONAL_JUMP)  ; LAB_0058f6ba
        ;   Label: LAB_0058fc43
    CMP EBX,0x9                         ; 0058fc49
    JNC 0x0058fc5e                      ; 0058fc4c
        ;   XREF to: 0058fc5e (CONDITIONAL_JUMP)  ; LAB_0058fc5e
    CMP EBX,0x7                         ; 0058fc4e
    JBE 0x0058f6c1                      ; 0058fc51
        ;   XREF to: 0058f6c1 (CONDITIONAL_JUMP)  ; LAB_0058f6c1
    MOV EAX,0x5ee8c8                    ; 0058fc57 | DAT_005ee8c8
    POP EBX                             ; 0058fc5c
    RET                                 ; 0058fc5d
    JBE 0x0058f6c8                      ; 0058fc5e
        ;   XREF to: 0058f6c8 (CONDITIONAL_JUMP)  ; LAB_0058f6c8
        ;   Label: LAB_0058fc5e
    CMP EBX,0xa                         ; 0058fc64
    JBE 0x0058f6cf                      ; 0058fc67
        ;   XREF to: 0058f6cf (CONDITIONAL_JUMP)  ; LAB_0058f6cf
    MOV EAX,0x5ee8ce                    ; 0058fc6d | DAT_005ee8ce
    POP EBX                             ; 0058fc72
    RET                                 ; 0058fc73
    JBE 0x0058f6ac                      ; 0058fc74
        ;   XREF to: 0058f6ac (CONDITIONAL_JUMP)  ; LAB_0058f6ac
        ;   Label: LAB_0058fc74
    CMP EBX,0x4                         ; 0058fc7a
    JBE 0x0058f6b3                      ; 0058fc7d
        ;   XREF to: 0058f6b3 (CONDITIONAL_JUMP)  ; LAB_0058f6b3
    MOV EAX,0x5ee8c2                    ; 0058fc83 | DAT_005ee8c2
    POP EBX                             ; 0058fc88
    RET                                 ; 0058fc89

